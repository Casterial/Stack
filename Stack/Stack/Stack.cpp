#include <cstdlib>
#include <iostream>
#include "Stack.h"


Stack::Stack()
{
	StackPtr = NULL;
}

Stack::~Stack()
{
	item* p1;
	item* p2;

	p1 = StackPtr;
	while (p1 != NULL)
	{
		p2 = p1;
		p1 = p1->prev;
		p2->prev = NULL;
		delete p2;
	}
}

void Stack::Push(std::string name, int value)
{
	item* n = new item;

	n->name = name;
	n->value = value;

	if (StackPtr == NULL)
	{
		StackPtr = n;
		StackPtr->prev = NULL;
	}
	else
	{
		n->prev = StackPtr;
		StackPtr = n;
	}
}

void Stack::ReadItem(item* r)
{
	std::cout << "---------------\n";
	std::cout << "name: " << r->name << std::endl;
	std::cout << "value: " << r->value << std::endl;
	std::cout << "---------------\n";
}

void Stack::Pop()
{
	if (StackPtr == NULL)
	{
		std::cout << "There is nothing on the stack\n";
	}
	else
	{
		item* p = StackPtr;
		ReadItem(p);
		StackPtr = StackPtr->prev;
		p->prev = NULL;
		delete p;
	}
}

void Stack::Print()
{
	item* p = StackPtr;

	while (p != NULL)
	{
		ReadItem(p);
		p = p->prev;

	}
}