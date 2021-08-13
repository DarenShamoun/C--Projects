// PC 5.12 - Celcius to Farenehit Table
// ----------------------------------------------------------------------
// Programmer: Daren Shamoun
// Date: 04/23/2021
// ----------------------------------------------------------------------
// Converts Celcius to farenheit and displays the values in a table.
// 
// ---------1---------2---------3---------4---------5---------6---------7
// 1234567890123456789012345678901234567890123456789012345678901234567890

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	//declares the variables.
	double celsius;
	double fahrenheit;

	//creates the main design of the head of the table.
	cout << "   " << "Temperature Conversion Table" << endl;
	cout << "   " << "----------------------------" << endl;
	cout << "     " << "Celsius" << "       " << "Fahrenheit" << endl;

	//loops the conversion and printing of the values.
	for (celsius = 0; celsius <= 20; celsius++)
	{
		//the conversion factor is ((C/5) * 9) + 32 = F
		//converts to fahrenheit and displays both values.
		fahrenheit = ((celsius / 5) * 9) + 32;
		cout << fixed << setprecision(1);
		cout << "   " << setw(7) << celsius;
		cout << setw(16) << fahrenheit << endl;
	}

	return 0;
}