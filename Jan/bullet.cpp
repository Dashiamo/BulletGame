#include "bullet.h"

Bullet::Bullet(float newX, float newY) {
	x = newX;
	y = newY;
	dx = 0;
	dy = 0;
}

void Bullet::setDx(float newDx){
	dx = newDx;
}

void Bullet::setDy(float newDy){
	dy = newDy;
}

void Bullet::move(float delta){
	x += dx * delta;
	y += dy * delta;
}