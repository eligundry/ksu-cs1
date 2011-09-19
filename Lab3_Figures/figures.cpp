// Outputs shapes
// Eli Gundry
// 09/15/2011

#include <iostream>
#include <string>

using namespace std;

int main()
{
	int i, n, m, size = 0;
	string line;
	
	cout << "Enter the size of your shape:" << endl;
	cin >> size;

	// Outputs square
	for (i = 0; i < size; i++) {
		line = "";

		for (n = 0; n < size; n++)
			line += '*';

		cout << line << endl;
	}

	cout << endl;

	// Outputs first triangle
	for (i = 0; i < size; i++) {
		line = "";

		for (n = 0; n <= i; n++)
			line += '*';

		cout << line << endl;
	}
	
	int spaceCounter, starCounter;
	string spaces, stars;
	
	cout << endl;
		
	// Outputs the second triangle
	for (spaceCounter = size - 1, starCounter = 1; starCounter <= size; starCounter++, spaceCounter--) {
		
		// Clears out the previous stars and spaces variable.
		spaces = "";  
		stars = "";

		for (i = 0; i < spaceCounter; i++)
			spaces += ' ';
		
		for (i = 0; i < starCounter; i++)
			stars += '*';

		cout << spaces << stars << endl;
	}
	
	return 0;
}
