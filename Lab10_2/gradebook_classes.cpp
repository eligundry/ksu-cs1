/*
 * Author      : Eli Gundry
 * Date        : 11/28/2011
 * Name        : Gradebook Classes
 * Description : Determines the weighted letter grade of a student with classes
 * Link        : http://www.cs.kent.edu/~lucc/ioop/Labs/Lab2/proj-13
 */

#include <iostream>
#include <string>

using namespace std;

class StudentGrade
{
	public:
		void input(StudentGrade grade);
		void output(StudentGrade grade);
	private:
		double final_score(StudentGrade grade); 
		char letter_grade(double final_score);
		string student_name;
		double quiz[2],
			   midterm,
			   final;
};


int main()
{
	StudentGrade grade;

	grade.input(grade);
	grade.output(grade);

	return 0;
}

void StudentGrade::input(StudentGrade grade)
{
	cout << endl << "#### CC Grade Book System ####" << endl << endl
		 << "What is the student's name?" << endl;
	getline(cin, student_name);
	cout << "How did " << student_name << " do on the first quiz?" << endl;
	cin >> quiz[0];
	cout << "And how did they do on the second quiz?" << endl;
	cin >> quiz[1];
	cout << "How did they do on the midterm?" << endl;
	cin >> midterm;
	cout << "What was their grade on the final?" << endl;
	cin >> final;
}

void StudentGrade::output(StudentGrade grade)
{
	cout << endl << "Quiz 1: " << (quiz[0] * 10) << endl
		 << "Quiz 2: " << (quiz[1] * 10) << endl
		 << "Midterm: " << midterm << endl
		 << "Final Exam: " << final << endl << endl
		 << student_name << " got a " << final_score(grade)
		 << " which is a(n) " << letter_grade(final_score(grade)) << "." << endl << endl;

}

double StudentGrade::final_score(StudentGrade grade)
{
	return ((final * 0.5) + (midterm * 0.25) + (((quiz[0] * 5) + (quiz[1] * 5)) * 0.25));
}

char StudentGrade::letter_grade(double final_score)
{
	if (final_score >= 90)
		return 'A';
	else if (final_score >= 80)
		return 'B';
	else if (final_score >= 70)
		return 'C';
	else if (final_score >= 60)
		return 'D';
	else
		return 'F';
}
