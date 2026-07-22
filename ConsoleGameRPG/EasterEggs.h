#pragma once
#include "Character.h"
#include "Utils.h"
#include "SoundManager.h"

// Функція приймає посилання на гравця, щоб ми могли змінювати його характеристики
void checkNameEasterEggs(Character& player, SoundManager& soundManager);
void checkActionEasterEggs(int action, Character& player, Character& enemy, SoundManager& soundManager);