#include <iostream>
using namespace std;

/*
PC 2A
Stock Comission
Daren Shamoun

Kathryn bought 750 shares of stock at a price of $35.00 per share.
She must pay her stockbroker a 2 percent commission for the transaction. 
Write a program that calculates and displays the following:
	-The amount paid for the stock alone (without the commission)
	-The amount of the commission
	-The total amount paid (for the stock plus the commission)
*/

int main()
{
	int numberOfShares = 750;
	double pricePerShare = 35.00;
	double commissionToBroker = 0.02;
	double amountPaidPreCommission, amountOfCommission, totalAmountPaid;

	amountPaidPreCommission = pricePerShare * numberOfShares;
	amountOfCommission = amountPaidPreCommission * commissionToBroker;
	totalAmountPaid = amountPaidPreCommission + amountOfCommission;

	cout << "The amount paid for the stock alone (without the commission) is -> $" << amountPaidPreCommission << endl;
	cout << "The amount of the commission is -> $" << amountOfCommission << endl;
	cout << "The total amount paid (for the stock plus the commission) is -> $" << totalAmountPaid << endl;
}