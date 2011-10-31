/*
 * Author      : Eli Gundry
 * Date        : 10/24/2011
 * Name        : Number Reader
 * Description : Finds the numbers in a file or user's input
 * Link        : http://www.cs.kent.edu/~lucc/ioop/Labs/Lab2/proj-7.dat 
 */

#include <iostream>
#include <string>
#include <cstdlib>
#include <fstream>
#include <sstream>
#include <cmath>

using namespace std;

int direct_input(double* scores);
// Get's the user's numberset from the keyboard
// Returns the count of numbers they entered
int file_input(double* scores);
// Allows the user to specifiy a file with numbers in it
// Returns the count of numbers from the file
double standard_deviation(double* scores, int total_numbers);
// Calculates the standard deviation of the passed numberset
// Returns that calculation

int main()
{
	double scores[50];
	bool shouldContinue = true;
	int i;
	char choice;
	string input;

	do {
		cout << "What would you like your input to be?" << endl 
			 << "1. Direct Input" << endl
			 << "2. File Input" << endl;
		cin >> input;
		choice = input.at(0);
		cin.ignore(1, '\n');

		switch (choice) {
			case '1':
				i = direct_input(scores);
				cout << "The standard deviation of your number set is " << standard_deviation(scores, i) << endl;
				break;
			case '2':
				i = file_input(scores);
				cout << "The standard deviation of your number set is " << standard_deviation(scores, i) << endl;
				break;
			default:
				cout << "Goodbye";
				shouldContinue = false;
		}
	} while (shouldContinue == true);
	return 0;
}

int direct_input(double* scores)
{
	string user_input;
	stringstream stream;
	double number;
	int i = 0;
	// It's crucial that i is set to 0
	// If you don't, it'll muck everything up!

	cout << "Enter up to 50 numbers" << endl;
	getline(cin, user_input);

	stream << user_input;

	while ((stream >> scores[i]) && (i < 50)) {
		++i;
	}

	return i;
}

int file_input(double* scores)
{
	char file_name[20];
	ifstream in_stream;
	int i = 0;
	bool shouldContinue = true;

	do {
		cout << "Enter your file's name" << endl;
		cin >> file_name;

		in_stream.open(file_name);

		if (in_stream.fail()) {
			cout << "Couldn't open " << file_name << ", please enter another file's name." << endl;
		} else {
			shouldContinue = false;

			while ((in_stream >> scores[i]) && (i < 50)) {
				++i;
			}
		}
	} while (shouldContinue == true);

	in_stream.close();

	return i;
}

double standard_deviation(double* scores, int total_numbers)
{
	double total = 0,
		   average = 0,
		   deviation = 0;

	// Let's start by calculating the total of all the numbers
	for (int i = 0; i < total_numbers; i++) {
		total += scores[i];
	}

	// Then, let's figure out the average of the numbers
	average = (total / total_numbers);

	// Finally, let's figure out the standard deviation of this number set
	for (int a = 0; a < total_numbers; a++) {
		deviation += pow((scores[a] - average), 2);
	}

	return sqrt(deviation / total_numbers);
}
