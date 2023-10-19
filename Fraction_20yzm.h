#include <iostream>
#include <exception>
#include <string>
using namespace std;

class FractionException : public std::exception {
	public:
const char* what() {
		return "Denominator cannot be 0";
	}
};

class Fraction {

public:
	int num;
	int den;

	Fraction(int n = 0, int d = 1);

	~Fraction();

	int getGCD(int n, int d);
	int getLCM();
	int numerator();
	int denominator();

	Fraction operator-() {
	        return Fraction(-num, den);
	    }


	friend std::ostream& operator<<(std::ostream& os, const Fraction& fraction) {
	    os << fraction.num << "/" << fraction.den;
	    return os;
	}

	Fraction& operator++(int) {
		num += den;
		return *this;
	}


};


Fraction operator+(const Fraction& left, const Fraction& right);
Fraction operator-(const Fraction& left, const Fraction& right);
Fraction operator*(const Fraction& left, const Fraction& right);
Fraction operator/(const Fraction& left, const Fraction& right);
Fraction& operator+=(Fraction& left, const Fraction& right);
Fraction operator++(Fraction& fraction);
int operator==(const Fraction& left, const Fraction& right);
int operator!=(const Fraction& left, const Fraction& right);
int operator>(const Fraction& left, const Fraction& right);
int operator<(const Fraction& left, const Fraction& right);
int operator>=(const Fraction& left, const Fraction& right);
int operator<=(const Fraction& left, const Fraction& right);
