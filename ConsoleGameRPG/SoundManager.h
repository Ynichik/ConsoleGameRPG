#pragma once
#include <string>

class SoundManager {
public:
    void init();                  // Ініціалізація аудіо
    void playVoiceLine(int id);   // Відтворення озвучки за ID (як у твоєму текстовому файлі!)
    void stopAll();               // Зупинити все
};