#include "BattleSystem.h"
#include "Utils.h" // Для slowPrint
#include "EasterEggs.h" // Для перевірки пасхалок під час бою
#include <iostream>
#include "Ui.h"

void startBattle(Character& player, Character& enemy) {
    std::string lastMessage = "Ти зустрів монстра: " + enemy.name + "!";

    while (player.isAlive() && enemy.isAlive()) {
        // 1. Очищуємо екран (стираємо старий кадр)
        std::cout << "\033[2J\033[H";

        // 2. Виводимо фіксований HUD (наприклад, зверху)
        drawBattleHUD(player, enemy);
        drawSeparator();

        // 3. Виводимо історію або результат останньої дії
        std::cout << "\n[Подія]: " << lastMessage << "\n\n";

        // 4. Отримуємо ввід
        std::string input;
        std::cout << "Твій хід!\n";
        std::cout << "(1—Атакувати монстра; 2—Втекти; 3—Лікуватись)" << std::endl;
		std::cin >> input;
		// місце для перевірки пасхалок, які можуть бути введені під час бою текстом
        try {
            int action = std::stoi(input);
            // Перевірка пасхалок
            checkActionEasterEggs(action, player, enemy);

            int finalDamage = player.getAttack();
            if (rand() % 5 == 0) { finalDamage *= 2; } // Критичний удар
            int monsterDmg = enemy.getAttack();

            // Логіка бою (використовуємо крапки!)
            if (action == 1) {
                enemy.takeDamage(finalDamage + rand() % 5);
                lastMessage = "Ви вдарили монстра і нанесли " + std::to_string(finalDamage) + " одиниць шкоди.";

                if (enemy.isAlive()) { // Використовуємо крапку
                    player.takeDamage(monsterDmg);
					lastMessage = "Ви вдарили монстра і нанесли " + std::to_string(finalDamage) + " одиниць шкоди. Монстру це не сподобалося і він вдарив вас у відповідь: у вас -" + std::to_string(monsterDmg) + " HP.";
                }
            }

            else if (action == 2) {
                player.takeDamage(monsterDmg);
                lastMessage = "Ви спробували втекти, але монстр занадто прудкий. ви отримали " + std::to_string(monsterDmg) + " одиниць шкоди";
                
            }
            else if (action == 3) {
                player.Heal(player.hl);//лікування
                enemy.Heal(enemy.hl);
                lastMessage = "Ви спробували полікуватись. Ви відновили" + std::to_string(player.hl) + " HP, але монстр теж відновив " + std::to_string(enemy.hl) + "HP";
            }

        }
        catch (...) {
            // 3. ЗАХИСТ ВІД ДУРНЯ: Якщо stoi() викинув помилку (значить, це букви на кшталт "абвгд" або "привіт")
            std::cin.clear();
            std::cin.ignore(1000, '\n');
            player.takeDamage(1000);
            slowPrint("Придурок, я тобі сказав ЦИФРУ!!! Як можна було це написати?! Я давав тобі можливість бути чемним і грати по правилам...\n");
        }
    }
	system("cls");
    if (!player.isAlive()) {
        std::cout << "Ви програли.\n";
    }
    else {
        std::cout << "\n" << enemy.name << " переможений! Ви прямуєте далі.\n";
    }
    
}