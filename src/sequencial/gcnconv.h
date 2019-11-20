//===============================================
//
// FileName: gcn_conv.h
// Describe: Header file with:
//           Graph Information Description.
//
//===============================================

#define CORA
// #define CITESEER
// #define PUBMED

#ifdef CORA

#define DATASET "CORA"
#define N_NODE 2708
#define N_WORD 1433
#define N_EDGE 10556
#define N_CLASS 16

#endif

#ifdef CITESEER

#define DATASET "CiteSeer"
#define N_NODE 3327
#define N_WORD 3703
#define N_EDGE 9104
#define N_CLASS 16

#endif

#ifdef PUBMED

#define DATASET "PubMed"
#define N_NODE 19717
#define N_WORD 500
#define N_EDGE 88648
#define N_CLASS 16

#endif

