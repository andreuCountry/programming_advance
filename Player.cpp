#include <cstdio>
#include <string>
#include "Player.hpp"

#define clamp(a,b,c)  std::min((a),std::max((b),(c)))

void Player::printPlayer() {
    printf("Speed: [%f]  |  Hp: [%d]  |  Gold: [%d]", speed, hp, gold);
}

void Player::increaseLife(int change) {
    hp = clamp(0, hp + change, maxHp);
}

void Player::increaseSpeed(int change) {
    speed = clamp(minSpeed, speed * change, maxSpeed);
}

bool Player::spendMoney(int change) {
    if(gold-change < 0) return false;
    gold -= change;
    return true;
}