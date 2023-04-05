// File : List.h
// Class: COP 3530 Data Structures
// Dev  : Catherine Silva
// Desc : Demo program for Stacks, Queues, and Lists
// --------------------------------------------------------

#ifndef LINKEDLIST_LIST_H
#define LINKEDLIST_LIST_H


const int LIST_HEAD = 0; // list position of head node
const int LIST_TAIL = -1; // specify current tail position


class List {
private:

    struct Node {
        int value;
        Node* next;
    };

    Node* head;
    int size;


public:

    List();


    ~List(); //destructor


    int getSize();
    bool isEmpty();


    void insert(int value, int position=LIST_TAIL); //=List_tail is a default value


    int remove(int position=LIST_TAIL);


    int read(int position);


    void modify(int value, int position);

private:

    Node* traverse(int position);


};


#endif //LINKEDLIST_LIST_H