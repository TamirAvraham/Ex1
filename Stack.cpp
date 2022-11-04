#include "Stack.h"
#define FAIL -1

void initStack(Stack* s) 
{
	s->stack = new LinkedList();

}
void cleanStack(Stack* s) 
{
	delete s->stack;
}
void push(Stack* s, unsigned int element)
{
	s->stack->Append(element);
}
int pop(Stack* s)
{
	if (isEmpty(s))
	{
		return FAIL;
	}
	unsigned int value = s->stack->First()->data;
	return s->stack->Remove(s->stack->First()) ? value : FAIL;
}
bool isEmpty(Stack* s)
{
	return s->stack->GetLength() <= 0;
}
bool isFull(Stack* s)
{
	return false;//"/* a positive-integer value stack, with no size limit */" the stack is never full 
}