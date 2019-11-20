#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <sys/time.h>

#include "gcnconv.h"

int main() {
    int i, j, k;
    FILE *ifp, *ofp;
    char file_name[100];
    char *line = NULL;
    size_t len = 0;
    const char *s = " ";
    char *token = NULL;
    float gflops = 0;
    float run_time_sec = 0;

    static float x[N_NODE][N_WORD];
    static float weight[N_WORD][N_CLASS];
    static int edge_index[2][N_EDGE+N_NODE];
    static float edge_weight[N_EDGE+N_NODE];

    float buffer[N_WORD];

    static float x_mul[N_NODE][N_CLASS];
    static float deg[N_NODE];
    static float deg_inv_sqrt[N_NODE];
    static float norm[N_EDGE+N_NODE];
    static float out[N_EDGE+N_NODE][N_CLASS];
    static float result[N_NODE][N_CLASS];

    struct timeval t1, t2, tr;

    // Load x
    sprintf(file_name, "./data/%s/x.bin", DATASET);
    if (!(ifp = fopen(file_name, "rb"))) {
        printf("File x.bin cannot be opened for read.\n");
        return -1;
    }
    for (j = 0; j < N_NODE; ++j) {
        fread(buffer, 4, N_WORD, ifp);
        for (i = 0; i < N_WORD; ++i) {
            x[j][i] = buffer[i];
        }
    }
    fclose(ifp);

    // Load weights
    sprintf(file_name, "./data/%s/weight_conv1.txt", DATASET);
    if (!(ifp = fopen(file_name, "r"))) {
        printf("File weight_conv1.txt cannot be opened for read.\n");
        return -1;
    }
    for (j = 0; j < N_WORD; ++j) {
        getline(&line, &len, ifp);
        token = strtok(line, s);
        weight[j][0] = atof(token);
        for (i = 1; i < N_CLASS; ++i) {
            token = strtok(NULL, s);
            weight[j][i] = atof(token);
        }
    }
    fclose(ifp);

    // Load edge indices
    sprintf(file_name, "./data/%s/edge_index.txt", DATASET);
    if (!(ifp = fopen(file_name, "r"))) {
        printf("File edge_index.txt cannot be opened for read.\n");
        return -1;
    }
    for (j = 0; j < 2; ++j) {
        getline(&line, &len, ifp);
        token = strtok(line, s);
        edge_index[j][0] = atof(token);
        for (i = 1; i < N_EDGE; ++i) {
            token = strtok(NULL, s);
            edge_index[j][i] = atof(token);
        }
    }
    fclose(ifp);

    gettimeofday(&t1, NULL);

    for (j = 0; j < N_NODE; ++j) {
        for (i = 0; i < N_CLASS; ++i) {
            x_mul[j][i] = 0;
            for (k = 0; k < N_WORD; ++k) {
                x_mul[j][i] += (x[j][k] * weight[k][i]);
            }
        }
    }

    for (j = 0; j < 2; ++j) {
        for (i = 0; i < N_NODE; ++i) {
            edge_index[j][N_EDGE+i] = i;
        }
    }

    for (i = 0; i < N_EDGE+N_NODE; ++i) {
        edge_weight[i] = 1;
    }

    for (i = 0; i < N_EDGE+N_NODE; ++i) {
        deg[edge_index[0][i]] = deg[edge_index[0][i]] + edge_weight[i];
    }

    for (i = 0; i < N_NODE; ++i) {
        deg_inv_sqrt[i] = 1 / sqrtf(deg[i]);
    }

    for (i = 0; i < N_EDGE+N_NODE; ++i) {
        norm[i] = deg_inv_sqrt[edge_index[0][i]] * edge_weight[i] * deg_inv_sqrt[edge_index[1][i]];
    }

    for (j = 0; j < N_EDGE+N_NODE; ++j) {
        for (i = 0; i < N_CLASS; ++i) {
            out[j][i] = norm[j] * x_mul[edge_index[0][j]][i];
        }
    } 

    for (j = 0; j < N_CLASS; ++j) {
        for (i = 0; i < N_EDGE+N_NODE; ++i) {
            result[edge_index[1][i]][j] = result[edge_index[1][i]][j] + out[i][j];
        }
    }

    gettimeofday(&t2, NULL);
    timersub(&t1, &t2, &tr);

    run_time_sec = -tr.tv_sec-(double)tr.tv_usec/1000000.0;
    gflops = (N_NODE * N_CLASS * N_WORD + 4 * N_NODE + 3 * N_EDGE + 2 * (N_EDGE + N_NODE) * N_CLASS) / run_time_sec;
    gflops = gflops / 1e9;
    printf("Complish GCN calculation step. [%.5f sec elapsed] [%.5f GFLOPS]\n", run_time_sec, gflops);

    sprintf(file_name, "./data/%s/result.txt", DATASET);
    if (!(ofp = fopen(file_name, "w"))) {
        printf("File result.txt cannot be opened for write.\n");
        return -1;
    }
    for (j = 0; j < N_NODE; ++j) {
        for (i = 0; i < N_CLASS; ++i) {
            fprintf(ofp, "%f ", result[j][i]);
        }
        fprintf(ofp, "\n");
    }
    fclose(ofp);

    printf("Processing complete.\n");
    return 0;
}
