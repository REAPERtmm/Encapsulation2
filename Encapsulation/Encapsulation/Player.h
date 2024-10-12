#ifndef PLAYER_H__
#define PLAYER_H__
#include "Attacker.h"
#include <iostream>
#include "AMovable.h"



class Player : public Entity, public Alive, public AMovable, public Attacker {
public:
	Player(float, float, float, float, Vector2);
	void TakeDamage(float) override;
	void Move() override;
	void Attack(Alive*) override;

};

#endif 

