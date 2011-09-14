// Generates Sum
// Eli Gundry
// 09/08/2011

#include <iostream>

using namespace std;

int main()
{
	int negative = 0;
	int positive = 0;
	int numbers [10];
	
	for (int i = 0; i < 10; i++) {
		// Get user input
		cout << "Please enter number " << i + 1 << endl;
		cin >> numbers[i];

		// Calculate totals
		if (numbers[i] <= 0)
			negative += numbers[i];
		else
			positive += numbers[i];
	}

	cout << "Your sums are:\n";
	cout << "\tTotal: " << (positive + negative) << endl;
	cout << "\tPositive: " << positive << endl;
	cout << "\tNegative: " << negative << endl;

	return 0;
}
