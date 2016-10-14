#ifndef STACK_H
#define STACK_H
#include <string>


class Stack
{
private:
	struct item
	{
		std::string name;
		int value;
		item * prev;
	};
	item* StackPtr;

public:
	void Push(std::string name, int value);
	void Pop();
	void ReadItem(item* r);
	void Print();

	Stack();
	~Stack();
};



#endif