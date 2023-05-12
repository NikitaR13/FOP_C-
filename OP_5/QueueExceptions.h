#ifndef OP_5_QUEUEEXCEPTIONS_H
#define OP_5_QUEUEEXCEPTIONS_H

#include "stdexcept"

class QueueExceptions : public std::logic_error {
public:
    explicit QueueExceptions(const char* message): std::logic_error(message) {}
};

class EmptyQueueException : public QueueExceptions{
public:
    explicit EmptyQueueException() : QueueExceptions("Error while popping the element: the queue is empty"){}
};

#endif //OP_5_QUEUEEXCEPTIONS_H
