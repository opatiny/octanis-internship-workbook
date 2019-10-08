#ifndef _FUNC_
#define _FUNC_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// recursive definition of a type
typedef struct Node {
    int val;
    struct Node * next;
} Node_t;

void printList(Node_t * head);
void push(Node_t * head, int val);

#endif
