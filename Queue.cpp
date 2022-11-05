#include "Queue.h"
//#include <iostream>
#define FAIL -1

/*
* inits a queue
* Input:queue to init,size of the queue
* Output:NONE
*/
void initQueue(Queue* q, unsigned int size)
{
	
	q->arr = new unsigned int[size];
	q->maxSize = size;
	q->tail = 0;
	q->head = 0;
}
/*
* cleans the queue
* Input:queue to clean
* Output:NONE
*/
void cleanQueue(Queue* q) 
{
	delete[] q->arr;
	
}
/*
* retuns if the queue is full
* Input:queue to check
* Output:NONE
*/
bool isFull(Queue* s) 
{
	return s->tail >= s->maxSize;
}
/*
* retuns if the queue is empty
* Input:queue to check
* Output:NONE
*/
bool isEmpty(Queue* s) 
{
	return s->tail <= 0;
}
/*
* enters a uint value to the end of the queue
* Input:queue to check
* Output:NONE
*/
void enqueue(Queue* q, unsigned int newValue) 
{
	
	
	q->arr[q->tail] = newValue;
	q->tail++;
	
}
/*
* takes out the head of the queue and returns its value or if the queue is empty it returns FAIL
* Input:queue to take out the head
* Output:NONE
*/
int dequeue(Queue* q) 
{
	if (isEmpty(q))
	{
		return FAIL;
	}
	unsigned int ret = q->arr[q->head];
	unsigned int* newArr = new unsigned int[q->maxSize];
	for (int i = 1,j=0; i < q->tail; i++,j++)
	{
		newArr[j] = q->arr[i];
	}
	q->tail--;
	q->arr = newArr;
	return ret;
}
