#include <iostream>
#include <string>
#include <vector>
#include <thread>
#include <cstdlib>
#include <ctime>
#include <chrono>
#include <clocale>
#include "Character.h"
#include "MonsterFactory.h"
#include "EasterEggs.h"
#include "Utils.h"
#include "BattleSystem.h"
#include "game_state.h"

using namespace std;

int main() {
    srand(static_cast<unsigned int>(time(0)));

	Character player;

    cout << "Як тебе звати, Мандрівнику?\n";
    cout << "Введіть ім'я:";
    getline(cin, player.name);
    checkNameEasterEggs(player);
    cout << "Вітаю " << player.name << "! Це твоя подорож в цьому магічному світі!";

    vector<Character> bestiary;

    if (isRunning == false) {
	    return 0;
    }

    // Тепер додавання монстрів виглядає дуже охайно
    bestiary.push_back(MonsterFactory::createMonster("Slime"));
    bestiary.push_back(MonsterFactory::createMonster("Goblin"));
    bestiary.push_back(MonsterFactory::createMonster("Ogr"));
    bestiary.push_back(MonsterFactory::createMonster("Death Knight"));

    for (int i = 0; i < bestiary.size(); i++) {//цикл для битви з кількома противниками підряд
        if (!player.isAlive()) { break; }//умова зупинки циклу
        startBattle(player, bestiary[i]);
        }

    system("cls");
    if (player.isAlive()) {
        std::cout << "Вітаю! Ви, та ваш персонаж " << player.name << " перемогли всіх монстрів!\n";
        std::cout << "========================================" << std::endl;
        std::cout << "             ___________                " << std::endl;
        std::cout << "            '._==_==_=_.'               " << std::endl;
        std::cout << "            .-\\:     /--.               " << std::endl;
        std::cout << "           | (|:.     |) |              " << std::endl;
        std::cout << "            '-|:.     |-'               " << std::endl;
        std::cout << "              \\::.   /                 " << std::endl;
        std::cout << "               '::. .'                  " << std::endl;
        std::cout << "                 ) (                    " << std::endl;
        std::cout << "               _.' '._                  " << std::endl;
        std::cout << "              `-------`                 " << std::endl;
        std::cout << "========================================" << std::endl;
    }
    else {
        std::cout << "Гра закінчена. Ви не змогли пройти весь шлях.\n";
    }

	return 0;
}