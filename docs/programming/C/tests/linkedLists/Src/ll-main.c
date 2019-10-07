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
    
    push(head, 2);
    printList(head);
    
    return 0;
}
