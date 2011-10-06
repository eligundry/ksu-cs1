/*
 * Author      : Eli Gundry
 * Date        : 10/06/2011
 * Name        : Change Calculator
 * Description : Tells you how much change to give
 * Link        : http://www.cs.kent.edu/~lucc/ioop/Labs/Lab5/ 
 */

#include <iostream>

using namespace std;

void compute_coin(int coin_value, int& number, int& amount_left);

int main()
{
	int number = 0, amount_left = 0;
	bool shouldContinue = true;

	do {
		cout << "How much change do you have to give? ";
		cin >> amount_left;

		if (amount_left >= 1 && amount_left <= 99) {
			cout << amount_left << " can be given as" << endl;

			compute_coin(25, number, amount_left);
			cout << number << " quarters, ";
			compute_coin(10, number, amount_left);
			cout << number << " dimes, ";
			compute_coin(1, number, amount_left);
			cout << "and " << number << " pennies." << endl;
		} else {
			cout << "Goodbye!" << endl;
			shouldContinue = false;
		}
	} while (shouldContinue != false);

	return 0;
}

void compute_coin(int coin_value, int& number, int& amount_left)
{
	number = (amount_left - (amount_left % coin_value)) / coin_value;
	amount_left -= coin_value * number;
}
