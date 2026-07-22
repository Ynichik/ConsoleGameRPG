#include "Ui.h"
#include <iostream>
#include "Localization.h"
#include "game_state.h"
#include "GameContext.h"

void drawSeparator() {
    std::cout << "=====================================================================\n";
}

void drawBattleHUD(const Character& player, const Character& enemy) {
    drawSeparator();
    std::cout << " [Гр.: " << player.name << "] HP: " << player.hp << " / " << player.maxhp
        << "   VS   [Ворог: " << enemy.name << "] HP: " << enemy.hp << " / " << enemy.maxhp << "\n";
    drawSeparator();
}

void drawSettingsMenu(GameContext& context) {
    bool inSettings = true;
    while (inSettings) {
        std::cout << "\033[2J\033[H";
        drawSeparator();
        std::cout << (context.loc.getLanguage() == Language::UA ? "=== НАЛАШТУВАННЯ ===\n" : "=== SETTINGS ===\n");
        drawSeparator();

        // Показуємо поточну мову та опцію її зміни
        std::cout << "1. " << (context.loc.getLanguage() == Language::UA ? "Мова: Українська" : "Language: English") << "\n";
        std::cout << "2. " << (context.loc.getLanguage() == Language::UA ? "Назад у головне меню" : "Back to Main Menu") << "\n";
        drawSeparator();
        std::cout << (context.loc.getLanguage() == Language::UA ? "Виберіть дію: " : "Choose action: ");

        int choice;
        std::cin >> choice;

        if (choice == 1) {
            // Перемикаємо мову
            if (context.loc.getLanguage() == Language::UA)
                context.loc.setLanguage(Language::EN);
            else
                context.loc.setLanguage(Language::UA);
        }
        else if (choice == 2) {
            inSettings = false; // Вихід з налаштувань назад в головне меню
        }
    }
}

void drawMenu(GameContext& context) {
    bool running = true;
    while (running) {
        std::cout << "\033[2J\033[H";
        drawSeparator();
        std::cout << context.loc.get("menu_title") << "\n";
        drawSeparator();

        // Виводимо пункти меню з урахуванням поточної мови
        std::cout << context.loc.get("start_game") << "\n";
        std::cout << context.loc.get("change_lang") << "\n";
        std::cout << context.loc.get("exit") << "\n";
        drawSeparator();
        std::cout << (context.loc.getLanguage() == Language::UA ? "Виберіть дію: " : "Choose action: ");

        int choice;
        std::cin >> choice;
        std::cin.ignore();

        if (choice == 1) {
            std::cout << "\033[2J\033[H";
            // Тут буде запуск гри
            running = false;
        }
        else if (choice == 2) {
            // Відкриваємо повноцінне підменю налаштувань
            drawSettingsMenu(context);
        }
        else if (choice == 3) {
            std::cout << "\033[2J\033[H";
            running = false;
            stopGame(); // Вихід з програми
        }
        else {
            std::cout << "\033[2J\033[H";
            std::cout << (context.loc.getLanguage() == Language::UA ? "Невірний вибір. Спробуйте ще раз.\n" : "Invalid choice. Try again.\n");
            std::system("pause");
        }
    }
}