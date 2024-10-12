
#include "Entity.h"

Entity::Entity(float _x, float _y) : position(_x, _y) {

}

std::string Entity::GetPos() {
	return Vector2::Print(position);
}

void Entity::SetPos(float _x, float _y) {
	position = Vector2(_x, _y);
}

Vector2 Entity::GetPos2() {
	return position;
}

void Entity::MoveTo(Entity* _target) {
	Vector2* direction = new Vector2(_target->GetPos2().GetX() - this->position.GetX(), _target->GetPos2().GetY() - this->position.GetY());
	Vector2* ndir = new Vector2(direction->x / direction->Magnitude(), direction->y / direction->Magnitude());
	this->position += *ndir;
	std::cout << "An Entity moved to x = " << this->position.GetX() << " ans y = " << this->position.GetY() << std::endl;
}


float Entity::DistanceBetween(Entity* _target) {
	Vector2* direction = new Vector2(_target->GetPos2().GetX() - this->position.GetX(), _target->GetPos2().GetY() - this->position.GetY());
	return direction->Magnitude();
}