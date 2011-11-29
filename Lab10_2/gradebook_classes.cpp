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
	private:
		double final_score(); 
		char letter_grade();
		char student_name[81];
		double quiz_1,
			   quiz_2,
			   midterm,
			   final;
};

void input(StudentGrade grade);
void output(StudentGrade grade);

int main()
{
	StudentGrade grade;

	input(grade);
	output(grade);

	return 0;
}

void input(StudentGrade grade)
{
	cout << "#### CC Gradebook System ####" << endl; 

	do {
		cout << "What is the student's name? (Press Enter to exit)" << endl;

		for (int num_of_students = 0; i < grade.student name; i++) {
			cin >> grade.student_name; 
		}

	} while (grade.student_name != '\r')

}

void output(StudentGrade grade)
{
	cout << endl << "Quiz 1: " << (grade.quiz_1 * 10) << endl
		 << "Quiz 2: " << (grade.quiz_2 * 10) << endl
		 << "Midterm: " << grade.midterm << endl
		 << "Final Exam: " << grade.final << endl << endl;

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
