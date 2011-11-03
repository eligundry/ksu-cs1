/*
 * Author      : Eli Gundry
 * Date        : 11/01/2011
 * Name        : Check
 * Description : Writes a check from an input
 * Link        : http://www.cs.kent.edu/~lucc/ioop/Labs/Lab7/ 
 */

#include <iostream>
#include <string>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

void write_check(string date, string name, char* dollars, char* cents, string payee);
string number_spell(char* number);

int main()
{
	string date, name, payee;
	char dollars [2], cents [2];

	cout << "Enter the check information as follows:\nDate: ";
	cin >> date;

	cout << "Name: ";
	cin.ignore(1, '\n');
	getline(cin, name);

	cout << "Dollars: ";
	cin >> dollars;

	cout << "Cents: ";
	cin >> cents;

	cout << "Payee: ";
	cin.ignore(1, '\n');
	getline(cin, payee);

	cout << endl << endl << "Your Check:" << endl << endl;
	write_check(date, name, dollars, cents, payee);

	return 0;
}

void write_check(string date, string name, char* dollars, char* cents, string payee)
{
	int length_of_longest_string = 0;
	string line1 = name,
		   line2 = "Pay to: " + payee,
		   line3 = number_spell(dollars) + " and " + cents + "/100";

	if (line1.length() < line2.length())
		if (line2.length() < line3.length())
			length_of_longest_string = line3.length();
		else
			length_of_longest_string = line2.length();
	else if (line1.length() < line3.length())
		length_of_longest_string = line3.length();
	else
		length_of_longest_string = line1.length();

	while (line1.length() < length_of_longest_string)
		line1 += ' ';

	while (line2.length() < length_of_longest_string)
		line2 += ' ';

	while (line3.length() < length_of_longest_string)
		line3 += ' ';

	cout << line1 << "\t\t" << date << endl
		 << line2 << "\t\t$" << dollars << '.' << cents << endl
		 << line3 << "\t\t" << "dollars" << endl;
}

string number_spell(char* number)
{
	string tens, singles, output [2];

	for (int i = 0; i < 2; ++i) {
		switch (number[i]) {
			case '1':
				// Output the strings for 10-19
				if (i == 0) {
					switch (number[1]) {
						case '1':
							return "eleven";
							break;
						case '2':
							return "twelve";
							break;
						case '3':
							return "thirteen";
							break;
						case '4':
							return "fourteen";
							break;
						case '5':
							return "fifteen";
							break;
						case '6':
							return "sixteen";
							break;
						case '7':
							return "seventeen";
							break;
						case '8':
							return "eighteen";
							break;
						case '9':
							return "nineteen";
							break;
						default:
							return "ten";
							break;
					}
					// Ends the loop at this point.
					i = 2;
				} else {
					singles = "one";
				}
				break;
			case '2':
				tens = "twenty";
				singles = "two";
				break;
			case '3':
				tens = "thirty";
				singles = "three";
				break;
			case '4':
				tens = "forty";
				singles = "four";
				break;
			case '5':
				tens = "fifty";
				singles = "five";
				break;
			case '6':
				tens = "sixty";
				singles = "six";
				break;
			case '7':
				tens = "seventy";
				singles = "seven";
				break;
			case '8':
				tens = "eighty";
				singles = "eight";
				break;
			case '9':
				tens = "ninety";
				singles = "nine";
				break;
			default:
				tens = "";
				singles = "";
				break;
		}

		if (i == 0)
			output[i] = tens;
		else
			output[i] = singles;
	}

	return tens + " " + singles;
}
