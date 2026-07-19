#include "Ui.h"
#include <iostream>

void drawSeparator() {
    std::cout << "=====================================================================\n";
}

void drawBattleHUD(const Character& player, const Character& enemy) {
    drawSeparator();
    std::cout << " [Гр.: " << player.name << "] HP: " << player.hp << " / " << player.maxhp
        << "   VS   [Ворог: " << enemy.name << "] HP: " << enemy.hp << " / " << enemy.maxhp << "\n";
    drawSeparator();
}