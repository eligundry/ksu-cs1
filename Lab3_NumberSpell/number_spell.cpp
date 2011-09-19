//
// Eli Gundry
// 09/19/2011

#include <iostream>
#include <string>

using namespace std;

int main()
{
	char number [2];
	string tens, singles, output [2];

	cout << "Please enter a two digit number" << endl;
	cin >> number;

	for (int i = 0; i < 2; i++) {
		switch (number[i]) {
			case '1':
				tens = "ten";
				singles = "one";
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

	cout << output[0] << " " << output[1] << endl;
}
