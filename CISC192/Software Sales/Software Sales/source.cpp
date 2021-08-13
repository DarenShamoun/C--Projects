// PC 4.12 - Software Sales
// ----------------------------------------------------------------------
// Programmer: Daren Shamoun
// Date: 04/16/2021
// ----------------------------------------------------------------------
// This program calculates the total cost of the software after  
// discounts are applied.
// ---------1---------2---------3---------4---------5---------6---------7
// 1234567890123456789012345678901234567890123456789012345678901234567890

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

int main()
{
	//declaring values and variables
	const double SOFTWARE_PACKAGE_PRICE = 99.00;
	const double DISCOUNT_TIER_1 = 0.20;
	const double DISCOUNT_TIER_2 = 0.30;
	const double DISCOUNT_TIER_3 = 0.40;
	const double DISCOUNT_TIER_4 = 0.50;
	double discount = 0;
	double subtotal;
	double totalPrice;
	int numberOfUnitsSold;

	//taking input from user
	cout << endl << "How many units would you like to buy?\n\n";
	cin >> numberOfUnitsSold;

	//input validation
	if (!(numberOfUnitsSold > 0))
	{
		cout << "The quantity must be greater than zero.\n";
		return -1;
	}

	//calculating the subtotal
	subtotal = numberOfUnitsSold * SOFTWARE_PACKAGE_PRICE;


	if (numberOfUnitsSold >= 10 && numberOfUnitsSold <= 19)
	{
		discount = DISCOUNT_TIER_1 * subtotal;
	}
	else if (numberOfUnitsSold >= 20 && numberOfUnitsSold <= 49)
	{
		discount = DISCOUNT_TIER_2 * subtotal;
	}
	else if (numberOfUnitsSold >= 50 && numberOfUnitsSold <= 99)
	{
		discount = DISCOUNT_TIER_3 * subtotal;
	}
	else if (numberOfUnitsSold >= 100)
	{
		discount = DISCOUNT_TIER_4 * subtotal;
	}

	//calculates the total price
	totalPrice = subtotal - discount;
	
	cout << "\nThe total price of this sale is: $";
	cout << setprecision(2) << fixed << totalPrice << "\n\n";
	
	return 0;
}