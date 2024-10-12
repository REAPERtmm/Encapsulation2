
#include "BreakableObject.h"



BreakableObject::BreakableObject(float _x, float _y, float _life, float _maxlife) : Entity(_x, _y), Alive(_life, _maxlife) {
	std::cout << "Breakable Object just created at x =" << _x << " and y = " << _y << " with " << _life << "life" << std::endl;
}

void BreakableObject::TakeDamage(float _dmg) {
	Alive::TakeDamage(_dmg);
	std::cout << "Breakable Object just broke" << std::endl;
}