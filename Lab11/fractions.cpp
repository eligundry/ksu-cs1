/*
 * Author      : Eli Gundry
 * Date        : 12/07/2011
 * Name        : Fractional Computations
 * Description : Does computations with fractions
 * Link        : http://www.cs.kent.edu/~lucc/ioop/Labs/Lab2/proj-11.dat
 */

#include <iostream>
#include <cstdlib>

// Broke program into multiple files
// All the heavy lifting is done in fractional_computation.h
#include "fractional_computation.h"

using namespace std; 

int main()
{
	FractionalComputation fractions;

	fractions.input(fractions);
	fractions.output(fractions);

	return 0;
}
