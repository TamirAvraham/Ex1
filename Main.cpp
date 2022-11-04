#include<iostream>
#include "Queue.h"
int main() 
{
	Queue* q = new Queue;
	initQueue(q, 5);
	enqueue(q, 9);
	enqueue(q, 10);
	enqueue(q, 11);
	enqueue(q, 12);
	enqueue(q, 13);
	std::cout << isFull(q) << "\n";
	std::cout << q->maxSize << "\n";
	std::cout << dequeue(q) << "\n";
	enqueue(q, 14);
	while (!isEmpty(q))
	{
		std::cout << dequeue(q) << "\n";
	}
	cleanQueue(q);
	delete q;

	return 0;
}