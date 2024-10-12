#ifndef ENTITY_H__
#define ENTITY_H__
#include <iostream>

#include "Vector2.h"


class Entity {
protected:
	Vector2 position;
public:
	Entity(float, float);
	virtual void SetPos(float, float);
	virtual std::string GetPos();
	virtual Vector2 GetPos2();
	void MoveTo(Entity*);
	float DistanceBetween(Entity*);
};


#endif 

