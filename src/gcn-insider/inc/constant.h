#ifndef CONSTANT_H_
#define CONSTANT_H_



#define CORA
// #define CITESEER
// #define PUBMED

#ifdef CORA

#define DATASET "CORA"
#define N_NODE 2708
#define N_WORD 1433
#define N_EDGE 10556
#define N_CLASS 16
#define N_TILE 4

#endif

#ifdef CITESEER

#define DATASET "CiteSeer"
#define N_NODE 3327
#define N_WORD 3703
#define N_EDGE 9104
#define N_CLASS 16
#define N_TILE 7

#endif

#ifdef PUBMED

#define DATASET "PubMed"
#define N_NODE 19717
#define N_WORD 500
#define N_EDGE 88648
#define N_CLASS 16
#define N_TILE 5

#endif



#endif
