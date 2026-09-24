// Player.h
#ifndef PLAYER_HPP
#define PLAYER_HPP

#include <cstdio>
#include <string>
#include "Player.hpp"

#define clamp(a,b,c)  std::min((a),std::max((b),(c)))

#endif


void buyPotion(Player& p) {
    if(p.spendMoney(30)) {
        p.increaseLife(40);
    } else {
        printf( "estas pelao");
    }
}

void fallInLava(Player& p) {
    p.increaseLife(-150);
}

void pickUpBoots(Player& P) {
    P.increaseSpeed(10);
}

int main() {
    Player hero;
    hero.printPlayer();

    int precioArmadura = 200;
    if(hero.spendMoney(precioArmadura)) {
        //equipar armadura
    } else {
        printf("estas pelao!");
    }

    buyPotion(hero);
    hero.printPlayer();

    buyPotion(hero);
    hero.printPlayer();

    pickUpBoots(hero);
    pickUpBoots(hero);
    hero.printPlayer();

    fallInLava(hero);
    fallInLava(hero);
    hero.printPlayer();

    return 0;
}