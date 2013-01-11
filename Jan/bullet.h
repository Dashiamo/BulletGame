#ifndef BULLET_H
#define BULLET_H

class Bullet {
    float dx,dy;

  public:
  	float x, y;
  	Bullet(float, float);
    void setDx(float);
    void setDy(float);
    void move(float);
};

#endif