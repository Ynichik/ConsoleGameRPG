#pragma once
#include <string>

class Character {
public:
    std::string name;
    int hp, maxdmg, mindmg, hl, maxhp;

    Character();
    Character(std::string n, int h, int max, int min, int heal, int mh);

    void takeDamage(int amount);
    void Heal(int hl);
    bool isAlive();
    int getAttack();
};