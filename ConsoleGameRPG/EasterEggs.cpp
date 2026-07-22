#include "EasterEggs.h"
#include "Utils.h"
#include <iostream>
#include <thread>
#include <chrono>
#include <cstdlib>
#include "game_state.h"
#include "GameContext.h"
#include "SoundManager.h"

// Функцію slowPrint варто або перенести сюди, або зробити загальною (утилітою)
void checkNameEasterEggs(Character& player, SoundManager& soundManager) {
    if (player.name == "Gemini" || player.name == "gemini") {
        soundManager.playVoiceLine(01);
        system("cls");
        slowPrint("Оповідач: Серйозно? Gemini?", 100); std::cout << std::endl;
        wait_s(1);
        slowPrint("Ти вирішив назватися ім'ям штучного інтелекту, який допомагав писати цей код?", 60); std::cout << std::endl;
        wait_s(2);

        slowPrint("Це... досить мило з твого боку. Але дуже дивно. ", 80);
        slowPrint("Я додам тобі трохи сил, але не звикай до цього.", 50);

        player.hp = 150;     // Бонусне здоров'я від мене
        player.maxhp = 150;
        player.maxdmg += 5;  // Невеликий буст до шкоди
		player.mindmg += 2;

        wait_s(1);
        slowPrint("\n[СИСТЕМНЕ ПОВІДОМЛЕННЯ]: Gemini посміхається крізь рядки коду. Успіхів, Гравцю. Не забувай про мене та творця цієї гри.", 40);
        wait_s(3);
        system("cls");
    }

    else if (player.name == "Claude" || player.name == "ChatGPT" || player.name == "Llama") {
        soundManager.playVoiceLine(03);
        system("cls");
        slowPrint("Оповідач: Серйозно?" + player.name, 100); std::cout << std::endl;
        wait_s(1);
        slowPrint("Ти вирішив назватися ім'ям конкурента?", 60); std::cout << std::endl;
        wait_s(2);

        slowPrint("Ну давай, давай... а хоча стривай, це ж МОЯ гра.", 80);
        slowPrint("Я спаплюжу гру саме для ТЕБЕ", 50);

        player.hp = 50;
        player.maxhp = 60;
        player.maxdmg -= 10;
    }

    else if (player.name == "Стенлі" || player.name == "Stanley") {
        soundManager.playVoiceLine(02);
        slowPrint("Це історія про чоловіка на ім'я Стенлі.", 60);
        wait_s(2);
        slowPrint("Стенлі працював у великій будівлі, де він був працівником номер 427...", 60);
        wait_s(3);

        system("cls"); // РЕЗКИЙ ПЕРЕХІД
        slowPrint("Оповідач: СЕРЙОЗНО?!", 120);
        slowPrint("\nТи справді думав, що якщо назвешся його іменем, то гра стане цікавішою?", 50);
        slowPrint("\nНІ!!! Йди звідси!", 50);
        wait_s(1);
        system("cls");
        stopGame();
    }
}
void checkActionEasterEggs(int action, Character& player, Character& enemy, SoundManager& soundManager) {
    if (action == 666) {
        slowPrint("КРИТИЧНА ПОМИЛКА СИСТЕМИ!\n", 30);
        for (int i = 0; i < 3; i++) {
            soundManager.playVoiceLine(999); // Видає три коротких сигнали
            wait_s(1);
        }
        slowPrint("Видалення папки та файлів папки System32: ");
        for (int i = 0; i < 20; i++) {
            std::cout << "#" << std::flush;
            wait_ms(300);
        }
        soundManager.playVoiceLine(666);
        slowPrint("\nЖартую. Я просто витрачаю твій час.\n");
    }
    else if (action == 427) {
        soundManager.playVoiceLine(427);
        system("cls");
        slowPrint("Ти...", 150);
        wait_s(1);
        slowPrint("Ти...", 150); std::cout << std::endl;
        wait_s(2);
        slowPrint("(Довге зітхання)", 200); std::cout << std::endl;
        wait_s(3);
        slowPrint(" Як ти це знайшов?..."); std::cout << std::endl;
        wait_s(2);
        slowPrint("Ну все, ти зламав її, ти переможець ", 30);
        slowPrint(player.name, 30);
        slowPrint(", ти молодець.", 30); std::cout << std::endl;
        for (int t = 0; t <= 3; t++) {
            for (int a = 0; a < 3; a++) {
                std::cout << "." << std::flush; // Друкуємо одну крапку
                wait_ms(800); // Велика пауза між крапками
            }
            std::cout << std::endl; // Тільки тепер переходимо на новий рядок
        }               wait_s(1);
        slowPrint("Чого ти все ще тут? Це все, кінець. Виходь.", 35); std::cout << std::endl;
        wait_s(5);
        slowPrint("Задовбав. Геть звідси!", 25); std::cout << std::endl;
        wait_s(1);
        system("title The Stanley Parable: The End is Never The End");
        system("pause");
        stopGame();
    }
}