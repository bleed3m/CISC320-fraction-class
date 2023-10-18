#include <iostream>
using namespace std;

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

	Fraction& operator++(int num) {
	    // Increment the value and return a reference to the updated object
	    num++;
	    return *this;
	}


};


Fraction operator++(const Fraction& fraction);
Fraction operator+(const Fraction& left, const Fraction& right);
Fraction operator-(const Fraction& left, const Fraction& right);
Fraction operator*(const Fraction& left, const Fraction& right);
Fraction operator/(const Fraction& left, const Fraction& right);
