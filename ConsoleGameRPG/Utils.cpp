#include "Utils.h"
#include <iostream>
#include <thread>
#include <chrono>

void slowPrint(std::string text, int speed) {
    for (char c : text) {
        std::cout << c << std::flush;
        std::this_thread::sleep_for(std::chrono::milliseconds(speed));
    }
}
void wait_ms(int milliseconds) {
    std::this_thread::sleep_for(std::chrono::milliseconds(milliseconds));
}
void wait_s(int seconds) {
    std::this_thread::sleep_for(std::chrono::seconds(seconds));
}