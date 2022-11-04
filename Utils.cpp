#include "Utils.h"
#include "Stack.h"
#include <iostream>
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