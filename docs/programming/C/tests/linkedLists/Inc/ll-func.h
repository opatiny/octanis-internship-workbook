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

// we write p_head every time we need the pointer on
// the head of the list -> to avoid confusions


// creates new list of one node with value val and
// returns the head of the list
Node_t * newList(int val);

// print value of all nodes
void printList(Node_t * head);

// print value of the index nth node (index starting at 0)
void printNode(Node_t * head, int index);

// return value of the index nth node (index starting at 0)
int getNode(Node_t * head, int index);

// add a new node with value val at the end of the list
void pushEnd(Node_t * head, int val);

// add a new node with value val at the beginning of the list
void pushStart(Node_t ** p_head, int val);

// remove last element of the list
void removeLast(Node_t * head);

// remove first element of the list
void removeFirst(Node_t ** p_head);

// returns number of nodes in the list
int getLength(Node_t * head);

// return a copy of list with head1
Node_t * makeCopy(Node_t * head);

// merge two lists into one, keeping the head of the first one
void mergeLists(Node_t * head1, Node_t ** p_head2);
#endif
