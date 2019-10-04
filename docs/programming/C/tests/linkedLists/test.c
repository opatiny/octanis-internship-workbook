// https://www.learn-c.org/en/Linked_lists

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node {
    int val;
    struct node * next;
} node_t;

void printList(node_t * head);
void push(node_t * head, int val);

int main() {
    node_t * head = NULL;
    head = malloc(sizeof(node_t));
    
    // test if the pointer remained null -> when does this happen?
    if (head == NULL) {
        return 1;
    }
    
    head->val = 1;
    head->next = NULL;
    
    int length = sizeof(node_t);
    
    printf("Length of node_t type: ");
    printf("%d\n", length);
    
    printList(head);
    
    printf("\n");
    
    push(head, 2);
    printList(head);
    
    return 0;
}

// print value of all nodes
void printList(node_t * head) {
    node_t * current = head;

    while (current != NULL) {
        printf("%d\n", current->val);
        current = current->next;
    }
}

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
