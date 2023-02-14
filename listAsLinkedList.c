/** 
 * ===========================================================
 * Name: 
 * Section: 
 * Project: Implementation of Linked List Library
 * Purpose: List ADT as linked list
 * ===========================================================
 */

// Use your solution from previous labs
#include "listAsLinkedList.h"

#include <stdio.h>
#include <stdlib.h>

Node* createNumberNode(double theNumberToPutInTheNode) {
    Node* theNode = malloc(sizeof(Node));

    theNode->next = NULL;
    theNode->data = REAL_NUMBER;

    theNode->data = (double*)malloc(sizeof(double));
    *(double*)theNode->data = theNumberToPutInTheNode;

    return theNode;
}