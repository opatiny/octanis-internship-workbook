// https://www.learn-c.org/en/Linked_lists

// local includes
#include "../Inc/ll-func.h"

int main() {
    Node_t * head = NULL;
    head = malloc(sizeof(Node_t));
    
    // test if the pointer remained null -> when does this happen?
    if (head == NULL) {
        return 1;
    }
    
    head->val = 1;
    head->next = NULL;
    
    int length = sizeof(Node_t);
    
    printList(head);
    
    printf("\n");
    
    pushEnd(head, 2);
    printList(head);

    printf("\n");

    pushStart(&head, 3);
    printList(head);

    printf("\n");

    printNode(head, 0);

    printf("\n");

    removeFirst(&head);
    printList(head);

    return 0;
}
