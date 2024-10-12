#ifndef ALIVE_H__
#define ALIVE_H__
#include <iostream>


class Alive {
public:
	float max_life;
	float life;

	Alive(float, float);
	virtual float GetMaxLife();
	virtual float GetLife();
	virtual void TakeDamage(float);
};

#endif // !ALIVE_H__

