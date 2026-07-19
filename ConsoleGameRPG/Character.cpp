#include "Character.h"
#include <cstdlib>

Character::Character() : name(""), hp(100), maxdmg(15), mindmg(10), hl(20), maxhp(120) {}

Character::Character(std::string n, int h, int max, int min, int heal, int mh)
    : name(n), hp(h), maxdmg(max), mindmg(min), hl(heal), maxhp(mh) {
}

void Character::takeDamage(int amount) {
    hp -= amount;
    if (hp < 0) hp = 0;
}

void Character::Heal(int healAmount) {
    hp += healAmount;
    if (hp > maxhp) hp = maxhp;
}

bool Character::isAlive() {
    return hp > 0;
}

int Character::getAttack() {
    return rand() % (maxdmg - mindmg + 1) + mindmg;
}