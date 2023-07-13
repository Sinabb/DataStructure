#include "Stack.h"

int main()
{
	Stack myStack;

	push(myStack, 1);
	push(myStack, 2);
	push(myStack, 3);

	Print(myStack);
	
	Pop(myStack);
	Print(myStack);
	Pop(myStack);
	Print(myStack);
	Pop(myStack);
	Print(myStack);

	Pop(myStack);
	DeleteAll(myStack);
}