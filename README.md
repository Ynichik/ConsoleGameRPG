# Console Text RPG in C++

A console-based turn-based role-playing game featuring a modular architecture, clean interface, and interactive easter eggs.

## 🌟 Key Features

* **Modular Architecture:** The project is divided into clear logical modules (`BattleSystem`, `Ui`, `MonsterFactory`, `EasterEggs`) for easy scaling and clean code maintenance.
* **Fixed UI/HUD:** A refreshing battle interface displaying the real-time status of player and enemy health.
* **Bestiary System:** Sequential progression through various enemies—from a common slime to a dangerous Death Knight—leading to a final victory.
* **Interactive Easter Eggs:** Unique narrator behavior and hidden reactions to specific names and inputs.
* **Input Error Protection:** Robust user input handling that prevents program crashes when text is entered instead of numbers.

## 🛠 Project Architecture

* `Main.cpp` — Main entry point, managing the overall game lifecycle.
* `BattleSystem.cpp / .h` — Turn-based battle logic, damage calculation, and critical hits.
* `Ui.cpp / .h` — Interface rendering module for status bars and separators.
* `MonsterFactory.cpp / .h` — Factory for creating and configuring bestiary monsters.
* `EasterEggs.cpp / .h` — Handling hidden easter eggs and special conditions.
* `Utils.cpp / .h` — Helper tools and utility functions.

## 🚀 How to Run

1. Clone the repository or download the source code.
2. Open the project in **Visual Studio**.
3. Build the solution (`Build Solution`) and run the application (`Start Without Debugging`).
4. Or you can just download the ready .exe file from the releases page.
