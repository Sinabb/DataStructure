#include <iostream>
#include "Monster.h"
#include "DoubleLinkedList.h"

int main()
{
	MonsterList myList;

	CreateMonster(myList, "Demon", 100);
	CreateMonster(myList, "Wlof", 50);
	CreateMonster(myList, "Slime", 10);

	PrintMonster(myList);
	PrintMonsterR(myList.pHead);
	std::cout << GetMonsterCount(myList) << std::endl;

	Monster* pResult = FindMonster(myList, "Demon");
	if (pResult)
	{
		std::cout << pResult->name << "있음" << std::endl;
	}
	else
	{
		std::cout << "못찾음" << std::endl;
	}
	DeleteMonster(myList, "Demon");
	PrintMonster(myList);
	DeleteAll(myList);
}