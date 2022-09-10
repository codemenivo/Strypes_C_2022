#include <stdio.h>
#include <stdlib.h>
#define COUNT 20

typedef struct node {
    __uint64_t data;
    struct node* next;
};
typedef struct node node_t;