/*
 * Author      : Eli Gundry
 * Date        : 11/10/2011
 * Name        : Repeating Chars
 * Description : Takes a char array and returns all but the first occurrence of the chars
 * Link        : http://www.cs.kent.edu/~lucc/ioop/Labs/Lab2/proj-9.dat 
 */

#include <iostream>
#include <string>

using namespace std;

typedef char* char_pointer;
char_pointer remove_char(string user_input);
// Takes an array of characters and returns array with only first occurrence

int main()
{
	string user_input;
	cout << "Please enter your sentence:" << endl;
	getline(cin, user_input);
	cout << remove_char(user_input) << endl;
	return 0;
}

char_pointer remove_char(string user_input)
{
	// Optimize the size of the character array for the worst case scenario
	char_pointer char_p = new char[user_input.size()];
	bool is_repeat = false;

	for (int i = 0, j = 0, p_size = 0; i < user_input.size(); i++, is_repeat = false, j = 0) {
		do {
			if (user_input.at(i) == char_p[j]) {
				is_repeat = true;
			}
			++j; 
		} while (j < p_size && !is_repeat);

		if (!is_repeat) {
			char_p[p_size] = user_input.at(i);
			++p_size;
		}
	}
	return char_p;
}
