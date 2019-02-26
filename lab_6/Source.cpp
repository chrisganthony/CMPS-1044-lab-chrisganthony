// Chris Anthony
// Computer Science I – Dr. Halverson
// Lab 6 - Switch Statements
// 2/26/19
// Description: This program asks the user which formula they want to use and
// uses a switch statement to show that formula. It creates an output file then
// prints the results to the output file.

#include <iostream> 
#include <fstream>

using namespace std;

int main()
{
	ofstream outfile; // Declare an output file
	outfile.open("output.txt");
	outfile << "Chris Anthony\n\n"; // Write my name to "output.txt"
	
	int count = 1;
	while (count <= 5)
	{
		// Variable Declaration
		int selection;

		cout << "Which formula do you want to see?\n\n";
		cout << "1. Area of a circle\n";
		cout << "2. Area of a rectangle\n";
		cout << "3. Volume of a cylinder\n";
		cout << "4. None of them!\n";
		
		cin >> selection;

		switch (selection)
		{
			case 1:
				outfile << "Pi times radius squared\n";
				break;
			case 2:
				outfile << "Length times width\n";
				break;
			case 3:
				outfile << "Pi times radius squared times height\n";
				break;
			case 4:
				outfile << "Well okay then...Goodbye!\n";
				break;
			default:
				outfile << "Not good with numbers, eh?\n";
		}
			
		count += 1;

	}

	outfile.close(); // Command to close file

	system("pause");
	return 0;
}