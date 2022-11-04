#include "Queue.h"
//#include <iostream>
#define FAIL -1
void initQueue(Queue* q, unsigned int size)
{
	
	q->arr = new unsigned int[size];
	q->maxSize = size;
	q->tail = 0;
	q->head = 0;
}
void cleanQueue(Queue* q) 
{
	delete[] q->arr;
	
}
bool isFull(Queue* s) 
{
	return s->tail >= s->maxSize;
}
bool isEmpty(Queue* s) 
{
	return s->tail <= 0;
}
void enqueue(Queue* q, unsigned int newValue) 
{
	
	
	q->arr[q->tail] = newValue;
	q->tail++;
	
}
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
