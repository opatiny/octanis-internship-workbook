#include "../Inc/ll-func.h"

// internal prototypes

// check if the address returned by malloc() is NULL -> stack is full (very bad)
void checkMalloc(Node_t * node);

// functionalities of the linked lists module

void printList(Node_t * head) {
    Node_t * current = head;

    while (current != NULL) {
        printf("%d\n", current->val);
        current = current->next;
    }
}

void printNode(Node_t * head, int index) {
    Node_t * current = head;
    int currentIndex = 0;

    while (current != NULL) {
        if(currentIndex == index) {
        printf("%d\n", current->val);
        return;
        }
        current = current->next;
        currentIndex++;
    }
}

int getNode(Node_t * head, int index) {
    Node_t * current = head;
    int currentIndex = 0;

    while (current != NULL) {
        if(currentIndex == index) {
        return current->val;
        }
        current = current->next;
        currentIndex++;
    }
}

void pushEnd(Node_t * head, int val) {
    Node_t * current = head;
    while (current->next != NULL) {
        current = current->next;
    }

    /* now we can add a new variable */
    current->next = malloc(sizeof(Node_t));
    checkMalloc(current->next);

    current->next->val = val;
    current->next->next = NULL;
}

void pushStart(Node_t ** head, int val) {
    Node_t * newNode = NULL;
    newNode = malloc(sizeof(Node_t));
    checkMalloc(newNode);

    newNode->val = val;
    newNode->next = *head;

    *head = newNode;
}

// remove last element of the list
void removeLast(Node_t * head) {
    
    if (head->next == NULL) {
        free(head);
    }
    Node_t * current = head;

    while(current->next->next != NULL) {
        current = current->next;
    }

    free(current->next);
    current->next = NULL;
}

// remove first element of the list (list must be at least two nodes long)
void removeFirst(Node_t ** head) {
    Node_t * newHead = NULL;

    if ((*head)->next == NULL) {
        free(*head);
        return;
    }

    newHead = (*head)->next;
    free(*head);
    *head = newHead;
}

/****** ERROR MESSAGES ******/

void checkMalloc(Node_t * node) {
    if (node == NULL) {
        printf("No more memory for node");
        exit(EXIT_FAILURE);
    }
}
