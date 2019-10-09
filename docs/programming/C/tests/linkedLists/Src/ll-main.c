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

    Node_t * head2 = newList(42);

    printList(head2);
    printf("\n");
    
    printList(head);
    printf("\n");
    
    pushEnd(head, 2);
    printList(head);
    printf("\n");

    pushStart(&head, 3);
    printList(head);
    printf("\n");

    printf("Length of head: %d\n", getLength(head));

    Node_t *headCopy = makeCopy(head);
    printf("Copy of head: ");
    printList(headCopy);
    pushStart(&headCopy, 131);
    printf("\n");

    printf("Merge head and headCopy: ");
    mergeLists(head, &headCopy);
    printList(head);
    printf("\n");

    printf("First node of head: ");
    printNode(head, 0);
    printf("\n");

    removeFirst(&head);
    printList(head);
    printf("\n");

    removeLast(head);
    printList(head);

    printf("\n");
    return 0;
}
