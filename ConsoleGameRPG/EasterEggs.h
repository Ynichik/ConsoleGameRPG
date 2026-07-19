#pragma once
#include "Character.h"
#include "Utils.h"

// Функція приймає посилання на гравця, щоб ми могли змінювати його характеристики
void checkEasterEggs(Character& player);
void checkActionEasterEggs(int action, Character& player, Character& enemy);