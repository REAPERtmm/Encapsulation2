#ifndef INTEGER_H__
#define INTEGER_H__



class Integer {

public:
	int value;
	Integer();
	Integer(int);
	Integer operator+(const Integer&);
	Integer* operator+=(const Integer&);

	Integer operator-(const Integer&);
	Integer* operator-=(const Integer&);


	Integer operator/(const Integer&);
	Integer* operator/=(const Integer&);

	Integer operator*(const Integer&);
	Integer* operator*=(const Integer&);

	Integer operator%(const Integer&);
	Integer* operator%=(const Integer&);

	Integer operator<<(const Integer&);
	Integer pow(const Integer&);

};
#endif // !IntegerEGER_H__

