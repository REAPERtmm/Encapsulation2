#ifndef MOB_H__
#define MOB_H__

#include <iostream>
#include "Entity.h"
#include "Alive.h"
#include "AMovable.h"


class Mob : public Entity, public Alive, public AMovable {
public:
	Mob(float, float, float, float, Vector2);
	void TakeDamage(float) override;
	void Move() override;
};

#endif // !MOB_H__
