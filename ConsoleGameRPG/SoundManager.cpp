#include "SoundManager.h"
#include <iostream>

void SoundManager::init() {
    std::cout << "[DEBUG] Sound system initialized.\n";
}

void SoundManager::stopAll() {
    voiceMusic.stop();
}

void SoundManager::playVoiceLine(int id) {
    stopAll(); // Зупиняємо попередній звук, якщо він грає
    std::string filename = "assets/audio/voice_" + std::to_string(id) + ".wav";
    if (!voiceMusic.openFromFile(filename)) {
        std::cout << "[ERROR] Could not load audio file: " << filename << "\n";
        return;
    }

    voiceMusic.play();
    //std::cout << "[DEBUG] Playing audio file: " << filename << "\n";
}

