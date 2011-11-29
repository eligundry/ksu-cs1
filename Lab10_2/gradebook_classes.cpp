/*
 * Author      : Eli Gundry
 * Date        : 11/28/2011
 * Name        : Gradebook Classes
 * Description : Determines the weighted letter grade of a student with classes
 * Link        : http://www.cs.kent.edu/~lucc/ioop/Labs/Lab2/proj-13
 */

#include <iostream>

using namespace std;

class StudentGrade
{
	public:
		void input();
		void output();
	private:
		double final_score(); 
		char letter_grade();
		double quiz_1,
			   quiz_2,
			   midterm,
			   final;
};

int main()
{
	StudentGrade grade;

	grade.input();
	grade.output();

	return 0;
}

void StudentGrade::input()
{
	cout << "What was the student's grade for quiz 1? (0-10)" << endl;
	cin >> quiz_1;
	cout << "And for quiz 2? (0-10)" << endl;
	cin >> quiz_2;
	cout << "How did they do on the midterm? (0-100)" << endl;
	cin >> midterm;
	cout << "And the final exam? (0-100)" << endl;
	cin >> final;
}

void StudentGrade::output()
{
	cout << endl << "Quiz 1: " << (quiz_1 * 10) << endl
		 << "Quiz 2: " << (quiz_2 * 10) << endl
		 << "Midterm: " << midterm << endl
		 << "Final Exam: " << final << endl << endl;
}

double StudentGrade::final_score()
{
	return ((final * 0.5) + (midterm * 0.25) + (((quiz_1 * 5) + (quiz_1 * 5)) * 0.25));
}

char StudentGrade::letter_grade()
{
	if (grade >= 90)
		return 'A';
	else if (grade >= 80)
		return 'B';
	else if (grade >= 70)
		return 'C';
	else if (grade >= 60)
		return 'D';
	else
		return 'F';
}
