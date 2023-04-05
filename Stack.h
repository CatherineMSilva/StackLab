// File : stack.h
// Class: COP 3530 Data Structures
// Dev  : Catherine Silva
// Desc : Demo program for Stacks, Queues, and Lists
// --------------------------------------------------------

#include "List.h"

#ifndef STACKLAB_STACK_H
#define STACKLAB_STACK_H


class Stack : public List {

public:
    void push(int value);

    int pop();

    int peek();


};


#endif //STACKLAB_STACK_H
