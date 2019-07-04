//
// Created by Kirsten S. on 2019-07-04.
//
#include <stdio.h>
#ifndef STACKS_QUEUES_H
#define STACKS_QUEUES_H
#endif //STACKS_QUEUES_H
typedef struct que {
    Stack queue;
    int queue_size;
} Queue;

/* Queue Operations
 * enqueue() - removes an element from the queue and returns it
 * dequeue() - adds an element on top of the queue
 * front() - checks the oldest element of the queue
 * isEmpty() - checks if stack is empty
 * isFull() - checks if stack is full
 * */
Queue createQueue(int size) {
    Queue Q; Stack stack;
    if (size > 2) {
        stack.stack_size = size;
        Q.queue_size = size;
        Q.queue = stack;
    } else
        printf("Size is too small for a queue!\n");
    return Q;
}

void enqueue(int data) {
}
void dequeue();
int front();
int isEmpty(); /* return 1 if true 0 if false */
int isFull();
