#pragma once
#include "Character.h"
#include <string>

class MonsterFactory {
public:
    // Повертає об'єкт Character з налаштованими характеристиками
    static Character createMonster(std::string type);
};