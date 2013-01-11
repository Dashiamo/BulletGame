#include "player.h"

Player::Player(float newX, float newY) {
	x = newX;
	y = newY;
}

void Player::move(float dx, float dy, float delta){
	x += dx * delta;
	y += dy * delta;
}