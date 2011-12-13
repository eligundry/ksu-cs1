using namespace std; 

/*
 * do {
 *     fml;
 * } while (alive);
 */

// Created my own fraction data type so everything can be returned easily
struct fraction {
	int numerator, denominator;
};	 

class FractionalComputation
{
	// I passed the FractionalComputation class to all of the functions
	// so that they can be accessed without having to add it before each
	// variable. Also, as long as a fraction is passed to them, this code
	// can be reimplemented in a variety of ways.
	public:
		void input(FractionalComputation fractions);
		void output(FractionalComputation fractions);
		fraction frac[2], answer;
	private:
		// All of the formulas for this assignment are given in the book
		fraction fractional_additon(FractionalComputation fractions);
		fraction fractional_subtraction(FractionalComputation fractions);
		fraction fractional_multiplication(FractionalComputation fractions);
		fraction fractional_division(FractionalComputation fractions);
		bool sanatize_input(FractionalComputation fractions);
		bool fractional_comparison(FractionalComputation fractions);
		int choice;
};

void FractionalComputation::input(FractionalComputation fractions)
{
	char input_char[21];

	// Get the user's fractions
	// Make them do it over if there is an error
	do {
		for (int i = 0; i < 2; i++) {
			cout << "Fraction " << (i + 1) << ": ";
			cin.getline(input_char, 21, '/');
			frac[i].numerator = atoi(input_char);
			cin.getline(input_char, 21, '\n');
			frac[i].denominator = atoi(input_char);
		}

		// Find out what they want to do with those fractions
		cout << "What would you like to do with these fractions?" << endl
			 << "1. Add" << endl
			 << "2. Subtract" << endl
			 << "3. Multiply" << endl
			 << "4. Division" << endl
			 << "5. Compare" << endl;
		cin >> choice;
	} while (!sanatize_input(fractions));
}

void FractionalComputation::output(FractionalComputation fractions)
{
	cout << endl
		 << "Fraction 1: " << frac[0].numerator << "/" << frac[0].denominator << endl
		 << "Fraction 2: " << frac[1].numerator << "/" << frac[1].denominator << endl;

	// Switch on the user's choice to do mathematical operation
	switch (choice) {
		case 1:
			fractional_additon(fractions); 
			break;
		case 2:
			fractional_subtraction(fractions);
			break;
		case 3:
			fractional_multiplication(fractions);
			break;
		case 4:
			fractional_division(fractions);
			break;
		case 5:
			if (fractional_comparison(fractions))
				cout << "Fraction 1 is greater than Fraction 2." << endl;
			else
				cout << "Fraction 1 is not greater than Fraction 2." << endl;
			break;
		default:
			exit(1);
	}

	if (choice != 5)
		cout << "Answer: " << answer.numerator << "/" << answer.denominator << endl;
}

fraction FractionalComputation::fractional_additon(FractionalComputation fractions)
{
	answer.numerator = (frac[0].numerator * frac[1].denominator) + (frac[1].numerator * frac[0].denominator);
	answer.denominator = frac[0].denominator * frac[1].denominator;
	return answer;
}

fraction FractionalComputation::fractional_subtraction(FractionalComputation fractions)
{
	answer.numerator = (frac[0].numerator * frac[1].denominator) - (frac[1].numerator * frac[0].denominator);
	answer.denominator = frac[0].denominator * frac[1].denominator;
	return answer;
}

fraction FractionalComputation::fractional_multiplication(FractionalComputation fractions)
{
	answer.numerator = frac[0].numerator * frac[1].numerator;
	answer.denominator = frac[0].denominator * frac[1].denominator;
	return answer;
}

fraction FractionalComputation::fractional_division(FractionalComputation fractions)
{
	answer.numerator = frac[0].numerator * frac[1].denominator;  
	answer.denominator = frac[0].denominator * frac[1].numerator;
	return answer;
}

bool FractionalComputation::fractional_comparison(FractionalComputation fractions)
{
	FractionalComputation::fractional_multiplication(fractions);

	if (answer.numerator < answer.denominator)
		return false;
	else
		return true;
}

bool FractionalComputation::sanatize_input(FractionalComputation fractions)
{
	// Disallow division by zero
	if (frac[0].denominator == 0 || frac[1].denominator == 0) {
		cout << "Division by 0 is not allowed. Aborting." << endl;
		return false;
	}

	return true;
}
