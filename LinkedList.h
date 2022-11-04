#pragma once

typedef struct Node
{
	unsigned int data;
	Node* next;
}Node;

Node* initNode(unsigned int data);
//class Node
//{
//public:
//	Node(unsigned int data);
//	~Node();
//	unsigned int data;
//	Node* next;
//};


class LinkedList
{
	public:
		LinkedList();
		~LinkedList();
		void Append(unsigned int data);
		void Append(Node* node);
		bool Remove(Node* ptrDel);
		unsigned int GetLength();
		Node* First();
	
	private:
		Node* head;
		unsigned int length;
		Node** getTempHead();
};

