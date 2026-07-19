#include "SoundManager.h"
#include <iostream>

void SoundManager::init() {
    // Тут згодом буде підключення бібліотеки (наприклад, SFML)
    std::cout << "[DEBUG] Sound system initialized.\n";
}

void SoundManager::playVoiceLine(int id) {
    // Пов'язуємо ID тексту з аудіофайлом
    std::string filename = "voice_" + std::to_string(id) + ".wav";
    std::cout << "[DEBUG] Playing audio file: " << filename << "\n";

    // Тут буде виклик відтворення звуку
}

void SoundManager::stopAll() {
    // Зупинка звуків
}