
#include "Vector2.h"
#include <sstream>


void  Vector2::SetX(float _x) {
	x = _x;
}

void  Vector2::SetY(float _y) {
	y = _y;
}

float Vector2::GetX() {
	return x;
}

float Vector2::GetY() {
	return y;
}

Vector2::Vector2(float _x, float _y) : x(_x), y(_y) {

}

std::string Vector2::Print(Vector2 vec) {
	std::stringstream sStream;
	sStream << "x : " << vec.GetX() << "y :" << vec.GetY() << std::endl;
	return sStream.str();
}

Vector2 Vector2::operator+(const Vector2& _right) {
	return Vector2(this->x + _right.x, this->y + _right.y);
}


Vector2* Vector2::operator+=(const Vector2& _right)
{
	this->x += _right.x;
	this->y += _right.y;
	return this;
}

Vector2* Vector2::operator/=(const Vector2& _right)
{
	this->x /= _right.x;
	this->y /= _right.y;
	return this;
}

float Vector2::Magnitude() {
	return sqrt(pow(x, 2) + pow(y, 2));
}