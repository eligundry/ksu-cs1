/*
 * Author      : Eli Gundry
 * Date        : 10/10/2011
 * Name        : File Fixer
 * Description : Fixes the output of a file
 * Link        : http://www.cs.kent.edu/~lucc/ioop/Labs/Lab2/proj-8.dat 
 */

#include <iostream>
#include <cstdlib>
#include <fstream>

using namespace std;

void space_remover(ifstream& in_stream, ofstream& out_stream);
// Takes the spaces out of the input file and outputs it

int main()
{
	ifstream in_stream;
	ofstream out_stream;

	in_stream.open("proj-8.dat");

	if (in_stream.fail()) {
		cout << "Opening the input file failed. Please try again later." << endl;
		exit(1);
	}

	out_stream.open("out.dat");

	if (out_stream.fail()) {
		cout << "Creating the output file failed. Please try again later." << endl;
		exit(1);
	}

	space_remover(in_stream, out_stream);

	in_stream.close();
	out_stream.close();

	return 0;
}

void space_remover(ifstream& in_stream, ofstream& out_stream)
{
	char current_char;
	bool shouldContinue = true;

	do {
		in_stream.get(current_char);

		if (current_char == ' ') {
			out_stream.put(current_char);

			do {
				in_stream.get(current_char);
			} while (current_char == ' ');

			out_stream.put(current_char);

		} else if (!in_stream.eof()) {
			out_stream.put(current_char);
		} else {
			shouldContinue = false;
		}
	} while (shouldContinue == true);
}
