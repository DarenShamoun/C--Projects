// PC 3.17 - Math Tutor
// ----------------------------------------------------------------------
// Programmer: Daren Shamoun
// Date: 04/16/2021
// ----------------------------------------------------------------------
// This program displays two random numbers to add together and waits for  
// a key press to then show the answer to the problem.
// ---------1---------2---------3---------4---------5---------6---------7
// 1234567890123456789012345678901234567890123456789012345678901234567890

#include <iostream>
#include <cmath>
#include <iomanip>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
	int randomNumber1;
	int randomNumber2;
	int answer;
	
	// seeding the random number generator
	unsigned seed = time(0);
	srand(seed);

	// Get random numbers from 100 to 999
	randomNumber1 = rand() % 900 + 100;
	randomNumber2 = rand() % 900 + 100;

	// solving the problem
	answer = randomNumber1 + randomNumber2;

	// Creating the UI of the program
	cout << endl;
	cout << "   " << "Math Tutor" << endl;
	cout << "   " <<"----------" << endl;
	cout << "   " <<"Solve the math problem displayed below." << endl;
	cout << "   " <<"Once solved, press the ENTER key to display";
	cout <<         " the solution." << endl << endl;
	cout << "   " << setw(5) << randomNumber1 << endl;
	cout << "   " << "+" << setw(4) << randomNumber2 << endl;
	cout << "   " << "-----";
	cin.get();                     //waits for user input
	cout << "   " << setw(5) << answer << endl << endl;

	return 0;
}