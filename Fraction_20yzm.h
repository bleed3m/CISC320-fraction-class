#include <iostream>
using namespace std;

class Fraction {

public:
	int num;
	int den;
	Fraction(int n = 0, int d = 1);

	~Fraction();

	int getGCD();
	int getLCM();
	int numerator();
	int denominator();


	friend std::ostream& operator<<(std::ostream& os, const Fraction& fraction) {
	    os << fraction.num << "/" << fraction.den;
	    return os;
	}
};

