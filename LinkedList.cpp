#include "LinkedList.h"
#include <iostream>
Node* initNode(unsigned int data) 
{
	Node* ret = new Node;
	ret->data = data;
	ret->next = nullptr;
	return ret;
}

Node** LinkedList::getTempHead() 
{
	return &this->head;
}
void LinkedList::Append(Node* link) 
{
	link->next = this->head;
	this->head = link;
	length ++;
}
void LinkedList::Append(unsigned int data)
{
	Node* link = initNode(data);
	this->Append(link);//200 IQ
}
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
			delete ptrDel;
			return true;
		}
		cur = cur->next;
	}
	return false;
	
}
unsigned int LinkedList::GetLength() 
{
	return this->length;
}
LinkedList::LinkedList() 
{
	length = 0;
	head = nullptr;

}
Node* LinkedList::First()
{
	return head;
}
LinkedList::~LinkedList() 
{
	Node* temp;
	while (head)
	{
		temp = head;
		head = temp->next;
		delete temp;
	}
}