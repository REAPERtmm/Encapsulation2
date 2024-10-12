#ifndef ATTACKER_H__
#define ATTACKER_H__

#include <iostream>
#include "Alive.h"


class Attacker {
public:
	virtual void Attack(Alive*) = 0;
};
#endif // !ATTACKER_H__
