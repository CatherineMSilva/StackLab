// File : Queue.h
// Class: COP 3530 Data Structures
// Dev  : Catherine Silva
// Desc : Demo program for Stacks, Queues, and Lists
// --------------------------------------------------------
#include "List.h"

#ifndef STACKLAB_QUEUE_H
#define STACKLAB_QUEUE_H


class Queue : public List {

public:
    void enqueue(int value);

    int dequeue();

    int peek();

};


#endif //STACKLAB_QUEUE_H
