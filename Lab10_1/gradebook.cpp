/*
 * Author      : Eli Gundry
 * Date        : 11/21/2011
 * Name        : Gradebook
 * Description : Determines the letter grade for a student's test
 * Link        : http://www.cs.kent.edu/~lucc/ioop/Labs/Lab2/proj-13 
 */

#include <iostream>
#include <string>

using namespace std;

int main()
{
	string student_name;
	double quiz_1, quiz_2, midterm, final;

	cout << "Please enter the student's name: ";
	cin >> student_name;
	cout << "Enter " << student_name << "'s first quiz score: ";
	cin >> quiz_1;
	cout << "And there second quiz score? ";
	cin >> quiz_2;
	cout << "How did they do on the midterm? ";
	cin >> midterm;
	cout << "What was there final score? ";
	cin >> final;

	return 0;
}
