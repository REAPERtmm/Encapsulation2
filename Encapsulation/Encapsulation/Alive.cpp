#include "Alive.h"

Alive::Alive(float _life, float _max_life) : life(_life), max_life(_max_life) {

}




float Alive::GetMaxLife() {
	return max_life;
}

float Alive::GetLife() {
	return life;
}	

void Alive::TakeDamage(float _dmg) {
	life -= _dmg;
}