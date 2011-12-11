using namespace std; 

// Created my own fraction data type so everything can be returned easily
struct fraction {
	int numerator,
		denominator;
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
		fraction user_input[2],
				 answer;
	private:
		// All of the formulas for this assignment are given in the book
		fraction fractional_additon(FractionalComputation fractions);
		fraction fractional_subtraction(FractionalComputation fractions);
		fraction fractional_multiplication(FractionalComputation fractions);
		fraction fractional_division(FractionalComputation fractions);
		bool fractional_comparison(FractionalComputation fractions);
		int choice;
};

void FractionalComputation::input(FractionalComputation fractions)
{
	// Get the user's fractions
	cout << "Numerator of fraction 1: ";
	cin >> user_input[0].numerator;
	cout << "Denominator of fraction 1: ";
	cin >> user_input[0].denominator;
	cout << "Numerator of fraction 2: ";
	cin >> user_input[1].numerator;
	cout << "Denominator of fraction 2: ";
	cin >> user_input[1].denominator;

	// Find out what they want to do with those fractions
	cout << "What would you like to do with these fractions?" << endl
		 << "1. Add" << endl
		 << "2. Subtract" << endl
		 << "3. Multiply" << endl
		 << "4. Division" << endl
		 << "5. Compare" << endl;
	cin >> choice;
}

void FractionalComputation::output(FractionalComputation fractions)
{
	cout << endl
		 << "Fraction 1: " << user_input[0].numerator << "/" << user_input[0].denominator << endl
		 << "Fraction 2: " << user_input[1].numerator << "/" << user_input[1].denominator << endl;

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
	answer.numerator = (user_input[0].numerator * user_input[1].denominator) + (user_input[1].numerator * user_input[0].denominator);
	answer.denominator = user_input[0].denominator * user_input[1].denominator;
	return answer;
}

fraction FractionalComputation::fractional_subtraction(FractionalComputation fractions)
{
	answer.numerator = (user_input[0].numerator * user_input[1].denominator) - (user_input[1].numerator * user_input[0].denominator);
	answer.denominator = user_input[0].denominator * user_input[1].denominator;
	return answer;
}

fraction FractionalComputation::fractional_multiplication(FractionalComputation fractions)
{
	answer.numerator = user_input[0].numerator * user_input[1].numerator;
	answer.denominator = user_input[0].denominator * user_input[1].denominator;
	return answer;
}

fraction FractionalComputation::fractional_division(FractionalComputation fractions)
{
	answer.numerator = user_input[0].numerator * user_input[1].denominator;  
	answer.denominator = user_input[0].denominator * user_input[1].numerator;
	return answer;
}

bool FractionalComputation::fractional_comparison(FractionalComputation fractions)
{
	if ((user_input[0].numerator / user_input[0].denominator) < (user_input[1].numerator / user_input[1].denominator))
		return false;
	else
		return true;
}
