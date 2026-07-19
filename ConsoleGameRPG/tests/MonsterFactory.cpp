#include "../MonsterFactory.h"
#include "../Character.h"
#include <cstdlib>

Character MonsterFactory::createMonster(std::string type) {
	if (type == "Slime") {
		return Character("Slime", 20, 10, 5, 5, 30); // name, hp, maxdmg, mindmg, hl, maxhp
	}
	else if (type == "Goblin") {
		return Character("Goblin", 30, 15, 10, 10, 40);
	}
	else if (type == "Ogr") {
		return Character("Ogr", 75, 20, 15, 20, 80);
	}
	else if (type == "Death Knight") {
		return Character("Death Knight", 150, 25, 20, 0, 150);
	}
	// Стандартний монстр, якщо тип не знайдено
	return Character("Forgotten", 10, 5, 1, 0, 10);
}
