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
	int operation;
	double base, result, exponent;
	bool shouldContinue = true;

	do {
		cout << "1. absolute value\n2. ceiling\n3. power\n4. logarithm\nSelect an operation: ";
		cin >> operation;

		// Now, let's do our math and store it in result
		// I used a nested switch statement cause I didn't
		// want to repeat myself with prompts.
		if (operation >= 1 && operation <= 4) {
			cout << "Enter number: ";
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
			cout << "The result is: " << result << endl << endl;
		} else {
			shouldContinue = false;
		}
	} while (shouldContinue == true);

	return 0;
}
