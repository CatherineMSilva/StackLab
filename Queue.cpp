// File : Queue.h
// Class: COP 3530 Data Structures
// Dev  : Catherine Silva
// Desc : Implementation of Queue ADT
// --------------------------------------------------------

#include "Queue.h"

void Queue::enqueue(int value) {
    insert(value, LIST_TAIL);
}

int Queue::dequeue() {
    return remove(LIST_HEAD);
}

int Queue::peek() {
    return read(LIST_HEAD);
}
