#pragma once
#include <string>

// Оголошуємо функцію тут, щоб інші файли знали про її існування
void slowPrint(std::string text, int speed = 50);
void wait_ms(int milliseconds);
void wait_s(int seconds);