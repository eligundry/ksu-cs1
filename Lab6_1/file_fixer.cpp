/*
 * Author      : Eli Gundry
 * Date        : 10/10/2011
 * Name        : File Fixer
 * Description : Fixes the output of a file
 * Link        : http://www.cs.kent.edu/~lucc/ioop/Labs/Lab2/proj-8.dat 
 */

#include <iostream>
#include <fstream>

int main()
{
	using namespace std;
	ifstream in_stream;
	ofstream out_stream;

	in_stream.open("proj-8.dat");

	in_stream.close();
	return 0;
}
