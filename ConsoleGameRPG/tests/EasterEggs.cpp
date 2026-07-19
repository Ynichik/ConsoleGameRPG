#include "../EasterEggs.h"
#include "../Utils.h"
#include <iostream>
#include <thread>
#include <chrono>
#include <cstdlib>

void checkEasterEggs(Character& player) {
	if (player.name == "Gemini" || player.name == "gemini") {
		player.hp = 150;
	}
	else if (player.name == "Стенлі" || player.name == "Stanley") {
		// no-op for tests
	}
}
void checkActionEasterEggs(int action, Character& player, Character& enemy) {
	if (action == 666) {
		slowPrint("КРИТИЧНА ПОМИЛКА СИСТЕМИ!\n", 0);
	}
	else if (action == 427) {
		// no-op
	}
}
