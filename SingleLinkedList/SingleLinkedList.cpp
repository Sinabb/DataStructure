#include <iostream>
#include "SingleLinkedList.h"

Monster* CreateMonster(MonsterList& list, const char* name, const int hp)
{
	Monster* element = new Monster;
	strcpy_s(element->name, NAME_LENGTH, name);
	element->hp = hp;

	if (list.pTail == nullptr)
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

void PrintMonster(const MonsterList& list)
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

void DeleteAll(MonsterList& list)
{
	Monster* p = list.pHead;

	Monster* pNext{};

	while (p != nullptr)
	{
		pNext = p->pNext;
		delete p;
		p = pNext;
	}
	list.pHead = list.pTail = nullptr;
}

bool DeleteMonster(const MonsterList& list, const char* name)
{
	return false;
}
