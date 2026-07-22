#pragma once
#include <string>
#include <unordered_map>

enum class Language {
    UA,
    EN
};

class Localization {
private:
    Language currentLang;
    // Ключ -> { Англійський текст, Український текст }
    std::unordered_map<std::string, std::pair<std::string, std::string>> texts;

public:
    Localization(Language defaultLang = Language::UA);

    void setLanguage(Language lang);
    Language getLanguage() const;

    // Головний метод отримання рядка за ключем
    std::string get(const std::string& key) const;
};