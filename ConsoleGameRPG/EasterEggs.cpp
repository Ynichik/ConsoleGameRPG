#include "EasterEggs.h"
#include "Utils.h"
#include <iostream>
#include <thread>
#include <chrono>
#include <cstdlib>

// Функцію slowPrint варто або перенести сюди, або зробити загальною (утилітою)
void checkEasterEggs(Character& player) {
    if (player.name == "Gemini" || player.name == "gemini") {
        // ... ваша логіка пасхалки ...
        player.hp = 150;
        // ...
    }
    else if (player.name == "Стенлі" || player.name == "Stanley") {
        // ... логіка пасхалки ...
    }
}
void checkActionEasterEggs(int action, Character& player, Character& enemy) {
    if (action == 666) {
        slowPrint("КРИТИЧНА ПОМИЛКА СИСТЕМИ!\n", 30);
        // ... тут вся логіка з 666 ...
    }
    else if (action == 427) {
        // ... логіка Стенлі ...
    }
}