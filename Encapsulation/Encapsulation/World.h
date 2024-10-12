#ifndef WORLD_H__
#define WORLD_H__
#include <iostream>
#include <vector>

#include "Entity.h"
#include <typeinfo>

class World {
public:
	std::vector<Entity*> ent;

	World();
	void Step();
	bool IsMobAlive();
	bool IsBOAlive();
};

#endif // !WORLD_H__

