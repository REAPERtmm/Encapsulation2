#ifndef BREAKABLEOBJECT_H__
#define BREAKABLEOBJECT_H__

#include <iostream>
#include "Entity.h"
#include "Alive.h"


class BreakableObject : public Entity, public Alive {
public:
	BreakableObject(float, float, float, float);
	void TakeDamage(float) override;
};

#endif // !BREAKABLEOBJECT_H__
