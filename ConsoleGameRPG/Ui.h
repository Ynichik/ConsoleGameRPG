#pragma once
#include "Character.h"
#include "Localization.h"
#include "GameContext.h"

// Функції для красивого виводу інтерфейсу
void drawBattleHUD(const Character& player, const Character& enemy);
void drawSeparator();
void drawMenu(GameContext& context);
void drawSettingsMenu(GameContext& context);