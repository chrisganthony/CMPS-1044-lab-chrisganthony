// Chris Anthony
// Computer Science I – Dr. Halverson
// Lab 8 - For Loops
// 03/11/19
// Description: This program reads the numbers 1 to 10 in rows and columns.
// It then adds the rows and columns in each row.This is done for all the
// table entries.The results are then printed in a 10 by 10 table to the outfile.

#include <iostream> 
#include <fstream>
#include <iomanip>

using namespace std;

int main()
{
	ofstream outfile; // Declare an output file
	outfile.open("output.txt"); // Create "output.txt" for writing
	outfile << "Chris Anthony\n\n"; // Write my name to "output.txt"

	
	int r, c, sum = 0;
	
	for (r = 1; r <= 10; r++)
	{
		for (c = 1; c <= 10; c++)
		{
			cout << setw(3) << r + c;
			sum += r + c;
		}

		cout << '\n'; // Separates each row of the table
	}

	cout << "\nThe sum of all the numbers is: " << sum << '\n';
	
	outfile.close(); // Command to close file
	
	return 0;
}


