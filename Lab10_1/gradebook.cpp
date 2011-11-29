/*
 * Author      : Eli Gundry
 * Date        : 11/21/2011
 * Name        : Gradebook
 * Description : Determines the letter grade for a student's test
 * Link        : http://www.cs.kent.edu/~lucc/ioop/Labs/Lab2/proj-13 
 */

#include <iostream>

using namespace std;

struct student_grade {
	double quiz_1,
		quiz_2,
		midterm,
		final;
};

double final_grade(student_grade value);
char letter_grade(double grade);

int main()
{
	student_grade grade;

	cout << "What was the student's grade for quiz 1? (0-10)" << endl;
	cin >> grade.quiz_1;
	cout << "And for quiz 2? (0-10)" << endl;
	cin >> grade.quiz_2;
	cout << "How did they do on the midterm? (0-100)" << endl;
	cin >> grade.midterm;
	cout << "And the final exam? (0-100)" << endl;
	cin >> grade.final;

	cout << endl << "Quiz 1: " << (grade.quiz_1 * 10) << endl
		 << "Quiz 2: " << (grade.quiz_2 * 10) << endl
		 << "Midterm: " << (grade.midterm) << endl
		 << "Final Exam: " << (grade.final) << endl << endl;

	double final_score = final_grade(grade);

	cout << "Student's final grade is " << final_score << " which is a(n) " << letter_grade(final_score) << endl;

	return 0;
}

double final_grade(student_grade value)
{
	return ((value.final * 0.5) + (value.midterm * 0.25) + (((value.quiz_1 * 5) + (value.quiz_1 * 5)) * 0.25));
}

char letter_grade(double grade)
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
