#ifndef AMOVABLE_H__
#define AMOVABLE_H__

#include <iostream>
#include "Entity.h"

class AMovable {
protected:
	Vector2 dir;
	float speed;
public:
	AMovable(Vector2, float);
	virtual void SetDir(Vector2);
	virtual void SetSpeed(float);
	virtual void Move() = 0;

};


#endif // !AMOVALBE_H__

