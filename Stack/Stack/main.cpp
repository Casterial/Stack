#include <cstdlib>
#include <iostream>
#include "Stack.h"

int main()
{
	Stack stack;

	//pushing items into Stack
	stack.Push("stack", 3);
	stack.Push("Coffee", 0);
	stack.Push("Lunch", 0);
	stack.Push("ESO", 6);
	stack.Print();
	//Popping items out of Stack
	std::cout << "<-----POPPING----->\n";
	std::cout << "Popping\n";
	stack.Pop();
	std::cout << "Popping\n";
	stack.Pop();
	std::cout << "Popping\n";
	stack.Pop();
	std::cout << "Popping\n";
	stack.Pop();
	std::cout << "Popping\n";
	stack.Pop();
	
	//Creating a new Stack
	std::cout << "\n\nNew Stack\n";
	stack.Push("Book", 100);
	stack.Push("Phone", 1);
	stack.Push("Dinosaur", 1);
	stack.Print();

	std::cout << "Press [Enter] to exit the terminal\n";
	std::cin.get();
}