// File : stack.cpp
// Class: COP 3530 Data Structures
// Dev  : Catherine Silva
// Desc : Demo program for Stacks, Queues, and Lists
// --------------------------------------------------------

#include "Stack.h"

void Stack::push(int value) {
    insert(value, LIST_HEAD);
}

int Stack::pop() {

    return remove(LIST_HEAD);
}

int Stack::peek() {

    return read(LIST_HEAD);
}
