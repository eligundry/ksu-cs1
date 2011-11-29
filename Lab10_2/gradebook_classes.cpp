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
		void final_grade();
};

int main()
{
	StudentGrade grade;

	return 0;
}
