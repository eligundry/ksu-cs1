// User inputted change calculator
// Eli Gundry
// 09/04/2011

#include <iostream>

using namespace std;

int main()
{
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);

	int quarters, nickels, dimes, pennies;
	double cents = 0;

	cout << "You have a pile of change in your hand.\nHow many quarters do you have?" << endl;
	cin >> quarters;
	cents += .25 * quarters;

	cout << "You have " << quarters << " quarters. How about dimes?" << endl;
	cin >> dimes;
	cents += .10 * dimes;

	cout << "Okay, " << dimes << " dimes. And nickels?" << endl;
	cin >> nickels;
	cents += .05 * nickels;

	cout << "Great, " << nickels << " nickels. Finally, how many pennies do you have?" << endl;
	cin >> pennies;
	cents += .01 * pennies;

	cout << "So that's " << pennies << " pennies.\nThat means you have $" << cents ;

	return 0;
}
