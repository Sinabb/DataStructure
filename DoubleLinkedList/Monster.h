#pragma once

const int NAME_LENGTH{ 100 };

struct Monster
{
	char name[NAME_LENGTH]{};
	int hp{};

	Monster* pNext{};
	Monster* pPrevious{};
};