#pragma once
#include <string>
#include <SFML/Audio.hpp>

class SoundManager {
private:
    sf::Music voiceMusic; // Об'єкт для програвання аудіофайлів

public:
    void init();                  // Ініціалізація аудіо
    void playVoiceLine(int id);   // Відтворення озвучки за ID (як у твоєму текстовому файлі!)
    void stopAll();               // Зупинити все
};