# Console Text RPG in C++ 🛡️

A console-based turn-based role-playing game featuring a modular architecture, clean ASCII interface, and interactive easter eggs. 
> **Note:** The game interface and text are entirely in Ukrainian (**гра повністю українською мовою**).

---

## 🖥️ Gameplay Preview
<img width="647" height="239" alt="image" src="https://github.com/user-attachments/assets/90b4d786-572a-40e7-aa50-e455eb618f6b" />


---

## ✨ Key Features

* **Modular Architecture:** The project is divided into clear logical modules (`BattleSystem`, `Ui`, `MonsterFactory`, `EasterEggs`) for easy scaling and clean code maintenance.
* **ASCII UI/HUD:** A clean, retro-style terminal battle interface displaying the real-time status of player and enemy health.
* **Bestiary System:** Sequential progression through various enemies—from a common slime to a dangerous Death Knight—leading to a final victory.
* **Interactive Easter Eggs:** Unique narrator behavior and hidden reactions to specific names and inputs.
* **Input Error Protection:** Robust user input handling that prevents program crashes when text is entered instead of numbers.

---

## 📂 Project Architecture

* `Main.cpp` — Main entry point, managing the overall game lifecycle.
* `BattleSystem.cpp` / `.h` — Turn-based battle logic, damage calculation, and critical hits.
* `Ui.cpp` / `.h` — Interface rendering module for status bars and separators.
* `MonsterFactory.cpp` / `.h` — Factory for creating and configuring bestiary monsters.
* `EasterEggs.cpp` / `.h` — Handling hidden easter eggs and special conditions.
* `Utils.cpp` / `.h` — Helper tools and utility functions.
* `SoundManager.cpp` / `.h` — Tool for adding sounds.

---

## 🚀 How to Run

### Windows (Visual Studio)
1. Clone the repository or download the source code.
2. Open the project solution (`.sln`) in **Visual Studio**.
3. Build the solution (`Build Solution`) and run the application (`Start Without Debugging`).
4. Alternatively, you can download the ready archive with the `.exe` file and DLLs from the **Releases** page.

### Linux / macOS (Cross-platform)
Since the project has no OS-specific dependencies, you can compile it directly via terminal:
```bash
g++ Main.cpp BattleSystem.cpp Ui.cpp MonsterFactory.cpp EasterEggs.cpp Utils.cpp -o text_rpg
./text_rpg
