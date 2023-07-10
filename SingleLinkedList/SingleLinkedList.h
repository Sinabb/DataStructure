#pragma once
#include "Monster.h"

struct MonsterList
{
	Monster* pHead{};
	Monster* pTail{};
};

// Create
Monster* CreateMonster(MonsterList& list, const char* name, const int hp);

// Count
int GetMonsterCount(const MonsterList& list);

// Print
void PrintMonster(const MonsterList& list);
void PrintMonsterR(const Monster* p);

// Search
Monster* FindMonster(const MonsterList& list, const char* name);

// Delete All
void DeleteAll(MonsterList& list);

// Delete Element
bool DeleteMonster(const MonsterList& list, const char* name);
