#pragma once
#include "Monster.h"

struct MonsterList
{
	Monster* pHead{};
	Monster* pTail{};
};

// Create
void CreateMonster(Monster& list, const char* name, const int hp);

// Count
int GetMonsterCount(const Monster& list);

// Print
void PrintMonster(const Monster& list);
void PrintMonsterR(const Monster* p);

// Search
Monster* FindMonster(const Monster& list, const char* name);

// Delete All
void DeleteAll(const Monster& list);

// Delete Element
bool DeleteMonster(const Monster& list, const char* name);
