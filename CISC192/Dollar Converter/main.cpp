// PC FP1 - Dollar Converter
// ----------------------------------------------------------------------
// Programmer: Daren Shamoun
// Date: 05/24/2021
// ----------------------------------------------------------------------
// Takes a CAD dollar amount and returns a USD dollar amount.
//
// ---------1---------2---------3---------4---------5---------6---------7
// 1234567890123456789012345678901234567890123456789012345678901234567890

#include <iostream>
#include <iomanip>
using namespace std;

double getCadInput();
double cadToUsd(double cadInput);

const double CAD_TO_USD = 0.75757576;

int main()
{
	double cadInput = 0.0;
	double usdAmount;

	cout << fixed << setprecision(2) << endl;
	
	//header text for the program
	cout << "   " << "Canadian to US Dollars\n";

	//gets user input
	cadInput = getCadInput();

	//converts user input based on the conversion factor
	usdAmount = cadToUsd(cadInput);

	//prints the amounts after calculations
	cout << "   $" << cadInput << " CAD is $" 
		<< usdAmount << " USD.\n\n";

	return 0;
}

//gets the user input of how many CAD dollars they want to convert
//and valiadates it to make sure it is not negative
double getCadInput()
{
	double cadInput = 0.0;
	
	do
	{
		cout << "   " << "Enter CAD amount: $";
		cin >> cadInput;
		if (cadInput < 0)
		{
			cout << "   " << "Amount must not be negative.\n";
		}
	} 	
	while (cadInput < 0);
	
	return cadInput;
}

//converts the CAD amount entered to USD
double cadToUsd(double cadInput)
{
	double usdAmount = cadInput * CAD_TO_USD;
	
	return usdAmount;
}