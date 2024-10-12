
#include "Player.h"



Player::Player(float _x, float _y, float _life, float _maxlife, Vector2 _dir) : Entity(_x, _y), Alive(_life, _maxlife), AMovable(_dir, 1) {
	std::cout << "Player just created at x = " << _x << " and y = " << _y << " with " << _life << " life " << " with direction x= " << _dir.GetX() << "and direction y = " << _dir.GetY() << std::endl;
}

void Player::TakeDamage(float _dmg) {
	std::cout << "Player just died" << std::endl;
}


void Player::Move() {
	position += dir;
	std::cout << "Player just moved to x = " << position.GetX() << " y = " << position.GetY() << std::endl;
}

void Player::Attack(Alive* _target) {
	_target->life -= 10;
	std::cout << "Player just attacked" << std::endl;
}