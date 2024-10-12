#ifndef VECTOR2_H__
#define VECTOR2_H__

#include <iostream>


class Vector2 {
public:
	float x;
	float y;


	Vector2(float, float);
	void SetX(float);
	void SetY(float);
	float GetX();
	float GetY();
	static std::string Print(Vector2);
	Vector2 operator+(const Vector2&);
	Vector2* operator+=(const Vector2&);
	Vector2* operator/=(const Vector2& _right);
	float Magnitude();
};

#endif 
