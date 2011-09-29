/*
 * Author      : Eli Gundry
 * Date        : 09/26/2011
 * Name        : Calculator
 * Description : Let's see if the price is right
 * Link        : http://www.cs.kent.edu/~lucc/ioop/Labs/Lab4/
 */

#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

int main()
{
	srand(time(NULL));

	int guess, random_number = rand() % 100;
	cout << "I selected a number between 0 and 99. Guess what it is." << endl;

	do {
		cin >> guess;

		if (guess < random_number)
			cout << "WRONG! It is larger. Try again. ";
		else if (guess > random_number)
			cout << "WRONG! It is smaller. Try again. ";
		else
			cout << "CORRECT!";

	} while (guess != random_number);

	return 0;
}
