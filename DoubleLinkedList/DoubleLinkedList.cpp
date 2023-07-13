#include <iostream>
#include "DoubleLinkedList.h"

// Create
Monster* CreateMonster(MonsterList& list, const char* name, const int hp)
{
	Monster* element = new Monster;
	strcpy_s(element->name, NAME_LENGTH, name);
	element->hp = hp;

	if (list.pTail == nullptr)
	{
		list.pHead = element;
		list.pTail = element;
	}
	else
	{
		list.pTail->pNext = element;
		element->pPrevious = list.pTail;
	}
	list.pTail = element;

	return element;
}

// Count
int GetMonsterCount(const MonsterList& list)
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

// Print
void PrintMonster(const MonsterList& list)
{
	Monster* p = list.pHead;
	while (p)
	{
		std::cout << p->name << "," << p->hp << std::endl;
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

// Search
Monster* FindMonster(const MonsterList& list, const char* name)
{
	Monster* p = list.pHead;
	while (p)
	{
		if (strcmp(p->name, name) == 0)
		{
			return p;
		}
		p = p->pNext;
	}
	return nullptr;
}

// Delete All
void DeleteAll(MonsterList& list)
{
	Monster* p = list.pHead;
	Monster* pNext{};

	while (p !=nullptr)
	{
		pNext = p->pNext;
		delete p;
		p = pNext;
	}
	list.pHead = list.pTail = nullptr;
}

// Delete Element
bool DeleteMonster(MonsterList& list, const char* name)
{
	Monster* pElement = list.pHead;
	Monster* pPrevious{};

	while (pElement)
	{
		if (strcmp(pElement->name, name) == 0) 
		{
			break;
		}
		pPrevious = pElement;
		pElement = pElement->pNext;
	}

	if (!pElement)
	{
		return false;
	}

	if (list.pHead == list.pTail)
	{
		list.pHead = list.pTail = nullptr;
	}

	else if (pPrevious == nullptr)
	{
		list.pHead = pElement->pNext;
	}

	else if (pElement == list.pHead)
	{
		list.pHead = pElement->pNext;
		list.pHead->pPrevious = nullptr;
	}
	else if (pElement == list.pTail)
	{
		list.pTail = pPrevious;
		list.pTail->pNext = nullptr;
	}
	else
	{
		pPrevious->pNext = pElement->pNext;
		pElement->pNext = pPrevious;
	}
	delete pElement;
	return true;
}