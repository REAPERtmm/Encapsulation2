#include "Integer.h"


Integer::Integer() : value(0) {

}

Integer::Integer(int _value) : value(_value) {

}

Integer Integer::operator+(const Integer& _right)
{
	return this->value + _right.value;
}

Integer* Integer::operator+=(const Integer& _right)
{
	 this->value += _right.value;
	 return this;
}

Integer Integer::operator-(const Integer& _right)
{
	return this->value - _right.value;
}

Integer* Integer::operator-=(const Integer& _right)
{
	this->value -= _right.value;
	return this;
}

Integer Integer::operator/(const Integer& _right)
{
	return this->value / _right.value;
}

Integer* Integer::operator/=(const Integer& _right)
{
	this->value /= _right.value;
	return this;
}

Integer Integer::operator*(const Integer& _right)
{
	return this->value * _right.value;
}

Integer* Integer::operator*=(const Integer& _right)
{
	this->value *= _right.value;
	return this;
}


Integer Integer::operator%(const Integer& _right)
{
	return this->value % _right.value;
}


Integer* Integer::operator%=(const Integer& _right)
{
	this->value %= _right.value;
	return this;
}


Integer Integer::operator<<(const Integer& _right)
{
	return this->value << _right.value;
}

Integer Integer::pow(const Integer& _pow) {
	int tmp = this->value;
	for (int i = 1; i < _pow.value; i++) {
		this->value *= tmp;
	}
	return this->value;
}