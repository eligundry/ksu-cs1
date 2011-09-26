/*
 * Author      : Eli Gundry
 * Date        : 09/26/2011
 * Name        : Calculator
 * Description : A simple scientific calculator
 * Link        : http://www.cs.kent.edu/~lucc/ioop/Labs/Lab4/
 */

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int operation, exponent;
	double base, result;
	bool shouldContinue = true;

	do {
		cout << "1. absolute value\n2. ceiling\n3. power\n4. logarithm\nSelect an operation: ";
		cin >> operation;

		// Now, let's do our math and store it in result
		// I used a nested switch statement cause I didn't
		// want to repeat myself with prompts.
		switch (operation) {
			case 1:
			case 2:
			case 3:
			case 4:
				cout << "Enter base: ";
				cin >> base;
				switch (operation) {
					case 1:
						result = abs(base);
						break;
					case 2:
						result = ceil(base);
						break;
					case 3:
						cout << "Enter exponent: ";
						cin >> exponent;
						result = pow(base, exponent); 
						break;
					case 4:
						result = log(base);
						break;
				}
				// Absolute value
				cout << "The result is: " << result << endl;
				break;
			default:
				shouldContinue = false;
				break;
		}
		cout << endl;
	} while (shouldContinue == true);

	return 0;
}
