#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node {
    int val;
    struct node * next;
} node_t;


// add new node at the end of the list
void push(node_t * head, int val) {
    node_t * current = head;
    while (current->next != NULL) {
        current = current->next;
    }

    /* now we can add a new variable */
    current->next = malloc(sizeof(node_t));
    current->next->val = val;
    current->next->next = NULL;
}