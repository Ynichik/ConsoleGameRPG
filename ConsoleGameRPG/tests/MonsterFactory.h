#pragma once
#include "../Character.h"
#include <string>

class MonsterFactory {
public:
	static Character createMonster(std::string type);
};
