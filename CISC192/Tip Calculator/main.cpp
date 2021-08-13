// PC FP2 - Tip Calculator
// ----------------------------------------------------------------------
// Programmer: Daren Shamoun
// Date: 05/24/2021
// ----------------------------------------------------------------------
// Takes a dollar amount and a tip level selection and calculates
// the tip and total.
// ---------1---------2---------3---------4---------5---------6---------7
// 1234567890123456789012345678901234567890123456789012345678901234567890

#include <iostream>
#include <iomanip>
using namespace std;

//prototypes of the functions necessary
double getAmount();
double getTipLevel();
double calcTip(double amountInput, double tipPercentage);
double calcTotal(double amountInput, double tipDollarAmount);

int main()
{
	double amountInput;
	double usdAmount;
	double tipPercentage;
	double tipDollarAmount = 0.00;
	double totalDollarAmount;

	//fixes the displayed output to 2 decimal places and in fixed form
	cout << fixed << setprecision(2) << endl;

	//displays the header of the program
	cout << "\n   " << "Tip Calc\n";

	//gets user input for the amount before tip
	amountInput = getAmount();

	//asks for user selection on the percentage
	//of tip that should be applied
	tipPercentage = getTipLevel();

	//calculates the dollar amount of the tip
	tipDollarAmount = calcTip(amountInput, tipPercentage);

	//calculates the total amount after tip is added
	totalDollarAmount = calcTotal(amountInput, tipDollarAmount);

	//displays both the tip amount and total amount in dollars
	cout << "\n   " << "Tip: $" << tipDollarAmount << endl
		<< "   " << "Total: $" << totalDollarAmount << "\n\n";

	return 0;
}

//gets user input for the amount before tip and makes sure its 
//a valid value
double getAmount()
{
	double amountInput = 0.0;

	do
	{
		cout << "   " << "Enter amount: $";
		cin >> amountInput;
		if (amountInput < 0)
		{
			cout << "   " << "Amount must not be negative.\n";
		}
	} 	while (amountInput < 0);

	return amountInput;
}

//asks for user selection on the percentage
//of tip that should be applied and makes sure that is a
//valid selection
double getTipLevel()
{
	double tipPercentage;
	int tipLevel;
	bool validator = false;
	
	do
	{
		cout << "\n   " << "Enter 1 for 10%\n"
			<< "         2 for 15%\n"
			<< "         3 for 20%\n"
			<< "         0 for none: ";

		cin >> tipLevel;

		switch (tipLevel)
		{
		case 0:
			tipPercentage = 0.00;
			return tipPercentage;
		case 1:
			tipPercentage = 0.10;
			return tipPercentage;
		case 2:
			tipPercentage = 0.15;
			return tipPercentage;
		case 3:
			tipPercentage = 0.20;
			return tipPercentage;
		default:
			cout << "   " << "Invalid tip level.\n";
			validator = true;
		}
	} 	while (validator);

}

//calculates the dollar amount of the tip
double calcTip(double amountInput, double tipPercentage)
{
	double tipDollarAmount = amountInput * tipPercentage;
	
	return tipDollarAmount;
}

//calculates the total amount after tip is added
double calcTotal(double amountInput, double tipDollarAmount)
{
	double totalDollarAmount = amountInput + tipDollarAmount;
	
	return totalDollarAmount;
}