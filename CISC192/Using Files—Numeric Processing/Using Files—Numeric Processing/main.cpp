// PC 5.24 - Using Files—Numeric Processing
// ----------------------------------------------------------------------
// Programmer: Daren Shamoun
// Date: 04/23/2021
// ----------------------------------------------------------------------
// Reads all numbers from "random.txt" and calculates the number of items
// , the sum of these items, and the average of all of the items.
// ---------1---------2---------3---------4---------5---------6---------7
// 1234567890123456789012345678901234567890123456789012345678901234567890

#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

int main()
{
	//declaring all neccessary variables.
	int counter = 0;
	double sum = 0;
	double average;
	int readValue;

	//declaring the ifstream object.
	ifstream random;

	//opening the file
	random.open("random.txt");

	//processing all data from the file.
	while(random >> readValue)
	{
		int readValue;
		random >> readValue;
		sum += readValue;
		counter++;
	}

	//closing the file.
	random.close();

	//calculating the average.
	average = sum / counter;

	//printing out the data found.
	cout << "   " << "The number of values was: " << counter << endl;
	cout << "   " << "The sum of these values was: " << sum << endl;
	cout << "   " << "The average of the values was: " << average << endl;

	return 0;
}