#include "LinkedList.h"
#include <iostream>
/*
* inits a node
* Input:Node data
* Output: Dynamic Node
*/
Node* initNode(unsigned int data) 
{
	Node* ret = new Node;
	ret->data = data;
	ret->next = nullptr;
	return ret;
}
/*
* returns the addrets of the head of the list
* Input:this
* Output:addres of head
*/
Node** LinkedList::getTempHead() 
{
	return &this->head;
}
/*
* appends a Node to the start of the list addes 1 to the length of the list
* Input:this,Node to append
* Output:NONE
*/
void LinkedList::Append(Node* link) 
{
	link->next = this->head;
	this->head = link;
	length ++;
}
/*
* appends a Node to the start of the list
* Input:this,Data of Node to append
* Output:NONE
*/
void LinkedList::Append(unsigned int data)
{
	Node* link = initNode(data);
	this->Append(link);//200 IQ
}
/*
* removes a Node from the list and removes 1 from length
* Input:this,Node to remove
* Output:if the delteing went well or not
*/
bool LinkedList::Remove(Node* ptrDel)
{
	Node** tempHead = this->getTempHead();
	Node* cur = *tempHead;
	if (ptrDel == *tempHead) {
		head = cur->next;
		delete ptrDel;
		return true;
	}

	while (cur) {
		if (cur->next == ptrDel) {
			cur->next = ptrDel->next;
			length--;
			delete ptrDel;
			return true;
		}
		cur = cur->next;
	}
	return false;
	
}
/*
* retuns the length of the list
* Input:this,Node to remove
* Output:if the delteing went well or not
*/
unsigned int LinkedList::GetLength() 
{
	return this->length;
}
/*
* inits the linked list class
* Input:NONE
* Output:this
*/
LinkedList::LinkedList() 
{
	length = 0;
	head = nullptr;

}
/*
* returns the head of the list or the head
* Input: this
* Output: head
*/
Node* LinkedList::First()
{
	return head;
}
/*
* deletes the list
* Input:this
* Output:NONE
*/
LinkedList::~LinkedList() 
{
	length = 0;
	Node* temp;
	while (head)
	{
		temp = head;
		head = temp->next;
		delete temp;
	}
}