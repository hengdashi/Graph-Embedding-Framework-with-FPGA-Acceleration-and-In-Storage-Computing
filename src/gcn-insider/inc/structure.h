#ifndef STRUCTURE_H_
#define STRUCTURE_H_


struct APP_gcn_in_data {
    float x[4];
    float weight[8];
    int edge_index[2];
};

struct APP_gcn_out_data {
    float result[16];
};
#endif
