#include "Player.h"



Player::Player(int a)
{
	score = a;
}


Player::~Player()
{
}



Player& Player::operator--() {   //data type should be in front of it£¡£¡then Player::£¡£¡
	score -= 1;
	return *this;   //don't forget the use of this pointer!!!
}