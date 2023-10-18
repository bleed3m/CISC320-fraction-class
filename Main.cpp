#include "Fraction_20yzm.h"

int main() {

	// Test constructors and << operator overloading
	Fraction test1;
	cout << "Should be \"0/1\": " << test1 << endl;
	Fraction test2(4);
	cout << "Should be \"4/1\": " << test2 << endl;
	Fraction test3(20, 30);
	cout << "Should be \"2/3\": " << test3 << endl;

	Fraction test4(210, -60);
	cout << "Should be \"-7/2\": " << test4 << endl;
	Fraction test5(-3, -4);
	cout << "Should be \"3/4\": " << test5 << endl;

	// Test accessors
	cout << "Numerator should be -7: " << test4.numerator() << endl;
	cout << "Denominator should be 2: " << test4.denominator() << endl;

	// Test binary arithmetic operators
	Fraction test6(9, 8);
	Fraction test7(1, 6);
	Fraction test8 = test6 + test7;
	cout << "Should be \"31/24\": " << test8 << endl;
	Fraction test9 = test6 - test7;
	cout << "Should be \"23/24\": " << test9 << endl;
	Fraction test10 = test6 - 1;
	cout << "Should be \"1/8\": " << test10 << endl;
	Fraction test11 = 2 - test7;
	cout << "Should be \"11/6\": " << test11 << endl;
	Fraction test12 = test6 * test7;
	cout << "Should be \"3/16\": " << test12 << endl;
	Fraction test13 = test6 / test7;
	cout << "Should be \"27/4\": " << test13 << endl;

	return 0;



}