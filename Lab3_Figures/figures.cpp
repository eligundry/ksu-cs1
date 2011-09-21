// Outputs shapes
// Eli Gundry
// 09/15/2011

#include <iostream>
#include <string>

using namespace std;

int main()
{
	int i, n, s, j, size = 0;
	string line;
	
	cout << "Enter the size of your shape:" << endl;
	cin >> size;

	/*
	 * Outputs square
	 * Each time through the loop, i will increment
	 * and line will reset. Loop stops when i < size.
	 */
	for (i = 0; i < size; i++, line = "") {

		for (n = 0; n < size; n++)
			line += '*';

		cout << line << endl;
	}

	cout << endl;

	/*
	 * Outputs first triangle
	 * Each time through the loop, i will increment
	 * and line will reset. Loop stops when i < size.
	 */
	for (i = 0; i < size; i++, line = "") {

		for (n = 0; n <= i; n++)
			line += '*';

		cout << line << endl;
	}
	
	cout << endl;
		
	/*
	 * Outputs the second triangle
	 * j counts the stars
	 * s counts the spaces 
	 * Each time through the loop, s will increment,
	 * j will decrement, and line will reset. Loop
	 * will stop when s equals the entered size.
	 */
	for (j = size - 1, s = 1; s <= size; s++, j--, line = "") {

		for (i = 0; i < j; i++)
			line += ' ';
		
		for (i = 0; i < s; i++)
			line += '*';

		cout << line << endl;
	}
}
