#include <iostream>
#include "SingleLinkedList.h"

void CreateMonster(Monster& list, const char* name, const int hp)
{
	Monster* element = new Monster;
	strcpy_s(elemnet->name, NAME_LENGTH, name);
	element->hp = hp;

	if (list.pNext == nullptr)
	{
		list.pHead = element;
	}
	else
	{
		list.pTail->pNext = element;
	}
	list.pTail = element;

	return element;
}

int GetMonsterCount(const Monster& list)
{
	Monster* p = list.pHead;
	int count{};
	while (p)
	{
		count++;
		p = p->pNext;
	}
	return count;

}

void PrintMonster(const Monster& list)
{
	Monster* p = list.pHead;
	while (p)
	{
		std::cout << p->name << "," << p ->hp  << std::endl;
		p = p->pNext;
	}

}

void PrintMonsterR(const Monster* p)
{
	if (p == nullptr)
	{
		return;
	}
	std::cout << p->name << "," << p->hp << std::endl;
	PrintMonsterR(p->pNext);
}

Monster* FindMonster(const Monster& list, const char* name)
{

	monster* p = list.pNext;

	while (p)
	{
		if (strcmp(p->name == name) == 0)
		{
			return p;
		}
		p = p->pNext;
	}
	return nullptr;
}

void DeleteAll(const Monster& list)
{
	Monster* p = list.phead;

	Monster* pNext{};

	while (p != nullptr)
	{
		pNext = p->pNext;
		delete p;
		p = p->pNext;
	}

	list.pNext = list.pNext = nullptr;
}

bool DeleteMonster(const Monster& list, const char* name)
{
	return false;
}
