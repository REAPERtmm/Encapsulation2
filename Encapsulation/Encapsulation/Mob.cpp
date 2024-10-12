
#include "Mob.h"

Mob::Mob(float _x, float _y, float _life, float _maxlife, Vector2 _dir) : Entity(_x, _y), Alive(_life, _maxlife), AMovable(_dir, 1) {
	std::cout << "Mob just created at x = " << _x << " and y = " << _y << " with " << _life << " life " << " with direction x= " << _dir.GetX() << "and direction y = " << _dir.GetY() <<  std::endl;
}

void Mob::TakeDamage(float _dmg) {
	Alive::TakeDamage(_dmg);
	std::cout << "Mob just died" << std::endl;
}


void Mob::Move() {
	position += dir;
	std::cout << "Mob just moved to x = " << position.GetX() << " y = " << position.GetY() << std::endl;
}