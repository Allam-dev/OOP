#include "Player.h"
#include <string>
using namespace std;

int Player::number = 0;

Player::Player()
{
    number++;
}

Player::~Player()
{
    number--;
}

string Player::getName(){
    return name;
}

void Player::setName(string n){
    name = n;
}

int Player::getNumber(){
    return number;
}
