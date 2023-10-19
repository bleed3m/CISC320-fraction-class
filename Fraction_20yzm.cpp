#include "Fraction_20yzm.h"

Fraction::Fraction(int n, int d)
{
	if(d==0) {
		throw FractionException();
	}
	num = n;
	den = d;

	int gcd = getGCD(n, d);
	num = num / gcd;
	den = den / gcd;

	if (den < 0) {
		num = -num;
		den = -den;
	}


}

int Fraction::getGCD(int n, int d)
{
	int a = n;
	int b = d;

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

    int gcd = getGCD(a, b);

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


Fraction operator+(const Fraction& left, const Fraction& right) {
	int a = left.den;
	int b = right.den;

    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
	int gcd = a;
    int lcm = (left.den * right.den) / gcd;
    int sum_num = (left.num * (lcm / left.den)) + (right.num * (lcm / right.den));
    return Fraction(sum_num, lcm);
}

Fraction operator-(const Fraction& left, const Fraction& right) {
	int a = left.den;
	int b = right.den;

    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
	int gcd = a;
    int lcm = (left.den * right.den) / gcd;
    int sum_num = (left.num * (lcm / left.den)) - (right.num * (lcm / right.den));
    return Fraction(sum_num, lcm);
}

Fraction operator*(const Fraction& left, const Fraction& right) {
	int num = left.num * right.num;
	int den = left.den * right.den;
	return Fraction(num, den);
}

Fraction operator/(const Fraction& left, const Fraction& right) {
	int num = left.num * right.den;
	int den = left.den * right.num;
	return Fraction(num, den);
}

Fraction& operator+=(Fraction& left, const Fraction& right) {
	int a = left.den;
	int b = right.den;

    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
	int gcd = a;
    int lcm = (left.den * right.den) / gcd;
    int sum_num = (left.num * (lcm / left.den)) + (right.num * (lcm / right.den));
    left =  Fraction(sum_num, lcm);
    return left;
}

Fraction operator++(Fraction& fraction) {
	++fraction;
	return fraction;
}

int operator==(const Fraction& left, const Fraction& right) {
	if ((left.num == right.num) && (left.den == right.den)) {
		return 1;
	}
	return 0;
}

int operator!=(const Fraction& left, const Fraction& right) {
	if ((left.num != right.num) | (left.den != right.den)) {
		return 1;
	}
	return 0;
}

int operator>(const Fraction& left, const Fraction& right) {
	return (left.num * right.den) > (right.num * left.den);
}

int operator<(const Fraction& left, const Fraction& right) {
	return (left.num * right.den) < (right.num * left.den);
}

int operator>=(const Fraction& left, const Fraction& right) {
	return (left.num * right.den) >= (right.num * left.den);
}

int operator<=(const Fraction& left, const Fraction& right) {
	return (left.num * right.den) <= (right.num * left.den);
}



Fraction::~Fraction() {

}
