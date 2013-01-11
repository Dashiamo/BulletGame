#ifndef PLAYER_H
#define PLAYER_H

class Player {    
  public:
  	float x, y;
  	Player(float, float);
    void move(float,float,float);
};

#endif