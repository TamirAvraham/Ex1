#include "Stack.h"
#define FAIL -1
/*
* inits a stack
* Input: stack ot init
* Output:NONE
*/
void initStack(Stack* s) 
{
	s->stack = new LinkedList();

}
/*
* cleans the stack
* Input:stack to clean
* Output:NONE
*/
void cleanStack(Stack* s) 
{
	delete s->stack;
}
/*
* pushes value to the stack
* Input:stack to push into value into,value
* Output:NONE
*/
void push(Stack* s, unsigned int element)
{
	s->stack->Append(element);
}
/*
* pops a vlaue out of the stack
* Input:stack to pop out value of
* Output:NONE
*/
int pop(Stack* s)
{
	if (isEmpty(s))
	{
		return FAIL;
	}
	unsigned int value = s->stack->First()->data;
	return s->stack->Remove(s->stack->First()) ? value : FAIL;
}
/*
* retuns if the stack is empty
* Input: stack to check
* Output: if the stack is empty
*/
bool isEmpty(Stack* s)
{
	return s->stack->GetLength() <= 0;
}
/*
* returns if the stack is full
* Input: stack to check
* Output:if the stack is full
*/
bool isFull(Stack* s)
{
	return false;//"/* a positive-integer value stack, with no size limit */" the stack is never full 
}