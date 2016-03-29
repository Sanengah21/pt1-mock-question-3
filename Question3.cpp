///////////////////////////////////////////////////////////////////////////////////////////////////
//                         COMPUTER METHODS 3 PRACTICAL TEST 1 (MOCK)
// Name:Abraham Sanenga
// Student No: 214576463	
// Date: 29 March 2016
///////////////////////////////////////////////////////////////////////////////////////////////////
#include <iostream>

using namespace std;

// ***** QUESTION 3 ******
// Question 3 has 3 parts
// 3.1 Using the MINIMAL "Fraction" class provided, overload the greater than operator to work with
//     objects of class Fraction as a NON-MEMBER FUNCTION.   You may modify the Fraction class to 
//     demonstrate friendship.  DO NOT USE FLOATING POINT MATH!!!
// 3.2 Overload two functions called "add" which take two arguements, an integer and a fraction (in 
//     either order) and return a fraction.  
// 3.3 create a driver program to test your overloaded > operators and your overloaded 

class Fraction {

	friend bool operator >( Fraction F1, Fraction F2);
	friend Fraction add(int, Fraction);
	friend Fraction add(Fraction, int);


private:
	int num;				// numerator;
	int denom;				// denominator;
public:
	Fraction(int n, int d) : num(n), denom(d) { };
	void print() { cout << num << "/" << denom; };
};


bool operator > (Fraction f1, Fraction f2)
{
	bool isGreaterThan;

	if (f1.denom != f2.denom)
		isGreaterThan = (f1.denom < f2.denom);

	else
		isGreaterThan = (f1.num > f2.num);

	return isGreaterThan;
}

Fraction add(int inputNumber, Fraction fraction1)
{
	fraction1.num = (inputNumber*fraction1.denom) + fraction1.num;
	
	return fraction1;
}


Fraction add(Fraction fraction1, int inputNumber)
{

	fraction1.num = (inputNumber*fraction1.denom) + fraction1.num;

	return fraction1;

}

int main()
{

	Fraction fraction1(2, 13);
	Fraction fraction2(3, 11);

	if (fraction1 > fraction2) {

		cout << "fraction1 is greater than fraction2" << endl;
	}

	else {
		cout << " fraction2 is greater than fraction1 " << endl;
	}

}