#include "BattleSystem.h"
#include "Utils.h" // Для slowPrint
#include "EasterEggs.h" // Для перевірки пасхалок під час бою
#include <iostream>

void startBattle(Character& player, Character& enemy) {
    std::cout << "Ти зустрів монстра " << enemy.name << std::endl;

    while (player.isAlive() && enemy.isAlive()) {
        int action;
        std::cout << "Ти зустрів монстра " << enemy.name << std::endl;
        std::cout << "Твій хід!\n";
        std::cout << "(1—Атакувати монстра; 2—Втекти; 3—Лікуватись)" << std::endl;
        if (!(std::cin >> action)) {
            std::cin.clear();//чистка введених даних
            std::cin.ignore(1000, '\n');/*ігнорування 1000 символів з введених*/
            player.takeDamage(1000);
            std::cout << "Придурок, я тобі сказав ЦИФРУ!!! Як можна було це написати?! Я давав тобі можливість бути чемним і грати по правилам...\n";
            continue;
        }
        else {
            // Перевірка пасхалок
            checkActionEasterEggs(action, player, enemy);

            int finalDamage = player.getAttack();
            if (rand() % 5 == 0) { finalDamage *= 2; } // Критичний удар
            int monsterDmg = enemy.getAttack();

            // Логіка бою (використовуємо крапки!)
            if (action == 1) {
                enemy.takeDamage(finalDamage + rand() % 5);
                std::cout << "Ви вдарили монстра і нанесли " << finalDamage << " одиниць шкоди.\n";

                if (enemy.isAlive()) { // Використовуємо крапку
                    player.takeDamage(monsterDmg);
                    std::cout << " Монстру це не сподобалося і він вдарив вас у відповідь: у вас -" << monsterDmg << "HP" << std::endl;
                }
            }
            else if (action == 2) {
                player.takeDamage(monsterDmg);
                std::cout << "Ви спробували втекти, але монстр занадто прудкий. ви отримали " << monsterDmg << " одиниць шкоди" << std::endl;
            }
            else if (action == 3) {
                player.Heal(player.hl);//лікування
                enemy.Heal(enemy.hl);
                std::cout << "Ви спробували полікуватись. Ви відновили" << player.hl << " HP, але монстр теж відновив " << enemy.hl << "HP" << std::endl;
            }
        }
    }
    if (!player.isAlive()) {
        std::cout << "Ви програли.\n";
    }
    else {
        std::cout << "Вітаю! Ви, та ваш персонаж " << player.name << " перемогли всіх монстрів!\n";//привітання
        std::cout << "========================================" << std::endl;
        std::cout << "             ___________                " << std::endl;
        std::cout << "            '._==_==_=_.'               " << std::endl;
        std::cout << "            .-\\:      /-.               " << std::endl;
        std::cout << "           | (|:.     |) |              " << std::endl;
        std::cout << "            '-|:.     |-'               " << std::endl;
        std::cout << "              \\::.    /                 " << std::endl;
        std::cout << "               '::. .'                  " << std::endl;
        std::cout << "                 ) (                    " << std::endl;
        std::cout << "               _.' '._                  " << std::endl;
        std::cout << "              `-------`                 " << std::endl;
        std::cout << "========================================" << std::endl;
    }//графіка кубка
    
}