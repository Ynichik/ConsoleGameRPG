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

using namespace std;

int main() {
    srand(static_cast<unsigned int>(time(0)));

	Character player;

    cout << "Як тебе звати, Мандрівнику?\n";
    cout << "Введіть ім'я:";
    getline(cin, player.name);
    checkEasterEggs(player);
    cout << "Вітаю " << player.name << "! Це твоя подорож в цьому магічному світі!";

    vector<Character> bestiary;

    // Тепер додавання монстрів виглядає дуже охайно
    bestiary.push_back(MonsterFactory::createMonster("Slime"));
    bestiary.push_back(MonsterFactory::createMonster("Goblin"));
    bestiary.push_back(MonsterFactory::createMonster("Ogr"));
    bestiary.push_back(MonsterFactory::createMonster("Death Knight"));

    for (int i = 0; i < bestiary.size(); i++) {//цикл для битви з кількома противниками підряд
        if (!player.isAlive()) { break; }//умова зупинки циклу
        startBattle(player, bestiary[i]);
        }

	return 0;
}