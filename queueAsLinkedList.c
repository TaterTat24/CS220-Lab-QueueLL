/** 
 * ===========================================================
 * Name: Benjamin Tat
 * Section: T6
 * Project: Queue ADT implemented using linked list
 * Purpose: Queue ADT library - FIFO
 * ===========================================================
 */

#include "queueAsLinkedList.h"

QueueAsLinkedList* queueInit(){
    QueueAsLinkedList* queue = createLinkedList();
}

void queueEnqueue(QueueAsLinkedList* queue, double element){
    appendElementLinkedList(queue, element);
}

double queueDequeue(QueueAsLinkedList* queue){
    double valueAtFront = getElementLinkedList(queue, 0);
    deleteElementLinkedList(queue, 0);
    return valueAtFront;
}