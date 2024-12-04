#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	float a; // principle + rate
	float p = 10000; // principle
	float r = .01; // rate

	for (int day = 1; day <= 20; day++) { // number of days raised to the...
		a = p * pow(1 + r, day);// pow = power
		cout << day << "-----" << a << endl;
	}

}