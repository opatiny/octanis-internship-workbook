#include "../Inc/ll-func.h"

// internal prototypes

// check if the address returned by malloc() is NULL -> stack is full (very bad)
void checkMalloc(Node_t * node);

// functionalities of the linked lists module

Node_t * newList(int val) {
    Node_t * head = NULL;
    head = malloc(sizeof(Node_t));
    checkMalloc(head);

    head->val = val;
    head->next = NULL;

    return head;
}

void printList(Node_t * head) {
    Node_t * current = head;

    while (current != NULL) {
        printf("%d ", current->val);
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

void pushStart(Node_t ** p_head, int val) {
    Node_t * newNode = NULL;
    newNode = malloc(sizeof(Node_t));
    checkMalloc(newNode);

    newNode->val = val;
    newNode->next = *p_head;

    *p_head = newNode;
}

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

void removeFirst(Node_t ** p_head) {
    Node_t * newHead = NULL;

    if ((*p_head)->next == NULL) {
        free(*p_head);
        return;
    }

    newHead = (*p_head)->next;
    free(*p_head);
    *p_head = newHead;
}

int getLength(Node_t * head) {
    Node_t * current = head;
    int counter = 0;

    while (current != NULL) {
        current = current->next;
        counter++;
    }

    return counter;
}

Node_t * makeCopy(Node_t * head) {
    Node_t * current = head;
    Node_t * head2 = newList(current->val);

    int headLength = getLength(head);

    while (current->next != NULL) {
        current = current->next;
        pushEnd(head2, current->val);
    }

    return head2;
}

void mergeLists(Node_t * head1, Node_t ** p_head2) {
    Node_t * current = head1;

    while (current->next != NULL) {
        current = current->next;
    }
    current->next = *p_head2;
}


/****** ERROR MESSAGES ******/

void checkMalloc(Node_t * node) {
    if (!node) { // because NULL is false
        printf("No more memory for node");
        exit(EXIT_FAILURE);
    }
}
