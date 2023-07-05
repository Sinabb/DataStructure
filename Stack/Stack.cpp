#include <iostream>

const int STACK_SIZE{ 10 };

enum Command
{
	PUSH = 1,
	POP = 2,
	QUIT = 3
};

struct Stack
{
	int container[STACK_SIZE]{};
	int topIndex{-1};
};

void PrintInfo()
{
	std::cout << "stack" << std::endl;
	std::cout << "1.push" << std::endl;
	std::cout << "2.pop" << std::endl;
	std::cout << "3.quit" << std::endl;
	std::cout << "---------------" << std::endl;
}

void PrintStack(Stack& stack)
{
	std::cout << "-----stack----" << std::endl;

	if (stack.topIndex < 0)
	{
		std::cout << "Empty!!" << std::endl;
		return;
	}
	for (int i = stack.topIndex; i>= 0; i--)
	{
		std::cout << stack.container[i] << std::endl;
	}
	std::cout << "---------------" << std::endl;
}

void Push(Stack& stack, int value)
{
	if (stack.topIndex >= STACK_SIZE-1)
	{
		std::cout << "Stack is Full!" << std::endl;
		return;
	}
	
	stack.container[++stack.topIndex] = value;
}

void Pop(Stack& stack)
{
	if (stack.topIndex < 0)
	{
		std::cout << "Stack is already!" << std::endl;
		return;
	}
	stack.topIndex--;
}

int main()
{
	Stack myStack;

	std::cout << "Stack" << std::endl;
	PrintInfo();
	int command{};

	while (true)
	{
		PrintStack(myStack);
		std::cout << ">";
		std::cin >> command;

		switch (command)
		{

		case PUSH:
		{
			int value{};
			std::cout << "\tinput value";
			std::cin >> value;
			Push(myStack, value);
			break;
		}
			
		case POP:
			Pop(myStack);
			break;

		case QUIT:
			return 0;
			break;

		default:
			std::cout << "잘못된 명령입니다." << std::endl;
			break;
		}
	}
}
