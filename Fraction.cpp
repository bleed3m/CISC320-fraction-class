#include "Fraction_20yzm.h"

Fraction::Fraction(int n, int d)
{
	num = n;
	den = d;

	int gcd = getGCD();
	num = num / gcd;
	den = den / gcd;

	if (den < 0) {
		num = -num;
		den = -den;
	}


}

int Fraction::getGCD()
{
	int a = num;
	int b = den;

    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}


int Fraction::getLCM()
{
    int a = num;
    int b = den;

    int gcd = getGCD();

    int lcm_result = (a * b) / gcd;
    return lcm_result;
}

int Fraction::numerator()
{
	return num;
}

int Fraction::denominator()
{
	return den;
}



Fraction::~Fraction() {

}
