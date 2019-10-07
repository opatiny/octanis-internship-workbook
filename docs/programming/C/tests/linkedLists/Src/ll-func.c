#include "../Inc/ll-func.h"

// functionalities of the linked lists module

// print value of all Nodes
void printList(Node_t * head) {
    Node_t * current = head;

    while (current != NULL) {
        printf("%d\n", current->val);
        current = current->next;
    }
}

// add new Node at the end of the list
void push(Node_t * head, int val) {
    Node_t * current = head;
    while (current->next != NULL) {
        current = current->next;
    }

    /* now we can add a new variable */
    current->next = malloc(sizeof(Node_t));
    current->next->val = val;
    current->next->next = NULL;
}