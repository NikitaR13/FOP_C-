#ifndef OP_5_QUEUE_H
#define OP_5_QUEUE_H

#include "QueueExceptions.h"
#include "iostream"
#include <cstdlib>

template<class T> class Queue {
private:
    int size;
    T *head;
    T *tail;
public:
    Queue();
    void push(T x);
    T pop();
    bool isEmpty();
    int sizeOf();
};

struct Node {
    int data;
    Node *next;
};

#endif //OP_5_QUEUE_H
