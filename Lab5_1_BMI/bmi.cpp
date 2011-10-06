/*
 * Author: Eli Gundry
 * Date: 10/03/2011
 * Name: Body Mass Index
 * Description: Calculates ones body mass
 * Link: http://www.cs.kent.edu/~lucc/ioop/Labs/Lab5/ 
 */

#include <iostream>
#include <string>

using namespace std;

void bmi(int int_weight, int int_height);

int main()
{
	int weight, feet, inches, height;

	cout << "Let's calculate your BMI.\nHow much do you weigh?" << endl;
	cin >> weight;
	cout << "Great. How many feet tall are you?" << endl;
	cin >> feet;
	cout << "Any extra inches?" << endl;
	cin >> inches;

	height = (feet * 12) + inches;
	bmi(weight, height);

	return 0;
}

void bmi(int int_weight, int int_height)
{
	double index = (int_weight * 703) / (int_height * int_height);
	cout << "Your BMI is " << index << ". ";

	if (index < 18.5)
		cout << "You are underweight.";
	else if (index >= 18.5 || index <= 24.9)
		cout << "You have a normal weight.";
	else if (index >= 25 || index <= 29.9)
		cout << "You are overweight.";
	else
		cout << "You are obese.";
}
