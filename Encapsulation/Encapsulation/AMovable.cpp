#include "AMovable.h"


void AMovable::SetDir(Vector2 _vecu) {
	dir = _vecu;
}

void AMovable::SetSpeed(float _speed) {
	speed = _speed;
}

AMovable::AMovable(Vector2 _vecu, float _speed) : dir(_vecu), speed(_speed) {

}

