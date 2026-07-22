#include "Localization.h"

Localization::Localization(Language defaultLang) : currentLang(defaultLang) {
    // Заповнюємо словник усіма текстовими фразами гри
    texts = {
        {"menu_title",   {"=== CONSOLE RPG ===", "=== КОНСОЛЬНА RPG ==="}},
        {"start_game",   {"1. Start Game", "1. Почати гру"}},
        {"change_lang",  {"2. Change Language (UA/EN)", "2. Змінити мову (UA/EN)"}},
        {"exit",         {"3. Exit", "3. Вихід"}},
        {"press_any_key",{"Press any key to continue...", "Натисніть будь-яку клавішу для продовження..."}},
        {"current_hp",   {"HP", "Здоров'я"}},
        {"victory",      {"VICTORY! You defeated the monster.", "ПЕРЕМОГА! Ви перемогли монстра."}}
    };
}

void Localization::setLanguage(Language lang) {
    currentLang = lang;
}

Language Localization::getLanguage() const {
    return currentLang;
}

std::string Localization::get(const std::string& key) const {
    auto it = texts.find(key);
    if (it != texts.end()) {
        return (currentLang == Language::EN) ? it->second.first : it->second.second;
    }
    return "[" + key + "]"; // Якщо ключ не знайдено, повернемо його назву для дебагу
}