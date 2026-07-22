#include "game_state.h"
#include <iostream>
#include "Character.h"

// Справжнє створення та ініціалізація змінної
bool isRunning = true;

Character player;

// Реалізація функції зупинки
void stopGame() {
    isRunning = false;
}
void Victory() {
    std::cout << "Вітаю! Ви, та ваш персонаж " << player.name << " перемогли всіх монстрів!\n";
    std::cout << "========================================" << std::endl;
    std::cout << "             ___________                " << std::endl;
    std::cout << "            '._==_==_=_.'               " << std::endl;
    std::cout << "            .-\\:     /--.              " << std::endl;
    std::cout << "           | (|:.     |) |              " << std::endl;
    std::cout << "            '-|:.     |-'               " << std::endl;
    std::cout << "              \\::.   /                 " << std::endl;
    std::cout << "               '::. .'                  " << std::endl;
    std::cout << "                 ) (                    " << std::endl;
    std::cout << "               _.' '._                  " << std::endl;
    std::cout << "              `-------`                 " << std::endl;
    std::cout << "========================================" << std::endl;
}