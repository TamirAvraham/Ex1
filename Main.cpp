#include<iostream>
#include "Queue.h"
#include "LinkedList.h"
#include "Stack.h"
#include "Utils.h"
int main() 
{
	Queue* q = new Queue;
	LinkedList *test = new LinkedList();
	Stack *s = new Stack;
	reverse10();
	
	initStack(s);
	push(s, 10);
	push(s, 9);
	push(s, 11);
	std::cout << pop(s) << "\n";
	test->Append(5);
	test->Append(6);
	test->Append(7);
	test->Append(8);
	test->Remove(test->First());
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