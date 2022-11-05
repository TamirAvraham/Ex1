#include "Utils.h"
#include "Stack.h"
#include <iostream>
/*
* reverse the array using the stack data structure
* Input: array to reverse,size of the array
* Output:NONE
*/
void reverse(int* nums, unsigned int size)
{
	int* ret = new int[size];
	int* save;
	Stack* s = new Stack;
	initStack(s);
	for (size_t i = 0; i < size; i++)
	{
		push(s, nums[i]);
	}
	for (size_t i = 0; i < size; i++)
	{
		ret[i] = pop(s);
	}
	save = ret;
	nums = ret;
	for (size_t i = 0; i < size; i++)
	{
		std::cout << nums[i] << ",";
	}
	std::cout << "\n";
	delete[] save; 
	delete s;
}
/*
* gets 10 numbers from the user and retuns the reversed array of the user input
* Input:NONE
* Output:Reversed array from the user inputs
*/
int* reverse10()
{
	int* ret = new int[10];
	for (size_t i = 0; i < 10; i++)
	{
		std::cout << "entering number: " << i<<" :\t";
		std::cin >> ret[i];
	}
	reverse(ret, 10);
	return ret;
}