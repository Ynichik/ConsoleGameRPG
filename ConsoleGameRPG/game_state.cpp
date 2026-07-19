#include "game_state.h"

// Справжнє створення та ініціалізація змінної
bool isRunning = true;

// Реалізація функції зупинки
void stopGame() {
    isRunning = false;
}