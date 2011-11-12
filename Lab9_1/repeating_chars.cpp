/*
 * Author      : Eli Gundry
 * Date        : 11/10/2011
 * Name        : Repeating Chars
 * Description : Takes a char array and returns all but the first occurrence of the chars
 * Link        : http://www.cs.kent.edu/~lucc/ioop/Labs/Lab2/proj-9.dat 
 */

#include <iostream>

using namespace std;

void remove_char(char* input);
// Takes an array of characters and returns array with only first occurrence

int main()
{
	const int INPUT_LENGTH = 200;
	char user_input [INPUT_LENGTH];

	cout << "Please enter the string of characters you would like evaluated" << endl;
	cin.getline(user_input, (INPUT_LENGTH - 1));
	
	remove_char(user_input);

	return 0;
}

void remove_char(char* input)
{
	int array_length = 0,
		a = 0,
		i = 0;

	// Figure out the max length of the new char array
	while (*input++) {
		++array_length;
	}

	// Initialize array with worst case length
	char returned_output [array_length];
}
