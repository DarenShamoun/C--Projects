#include <iostream>
using namespace std;

/*
PC 2B
Energy Drink Consumption
Daren Shamoun

A soft drink company recently surveyed 16,500 of its customers and 
found that approximately 15 percent of those surveyed 
purchase one or more energy drinks per week. 
Of those customers who purchase energy drinks, 
approximately 58 percent of them prefer citrus-flavored energy drinks. 
Write a program that displays the following:
	-The approximate number of customers in the survey who purchase one or more energy drinks per week
	-The approximate number of customers in the survey who prefer citrus-flavored energy drinks
*/

int main()
{
	int numberOfCustomers = 16500;
	double percentageOfWeeklyBuyers = 0.15;
	double percentageOfCitrusPrefrenced = 0.58;
	int numberOfWeeklyBuyers, numberOfCitrusPrefrenced;

	numberOfWeeklyBuyers = numberOfCustomers * percentageOfWeeklyBuyers;
	numberOfCitrusPrefrenced = numberOfCustomers * percentageOfCitrusPrefrenced;

	cout << "The number of customers in the survey who purchase one or more energy drinks per week is ->" << numberOfWeeklyBuyers << endl;
	cout << "The number of customers in the survey who prefer citrus-flavored energy drinks is ->" << numberOfCitrusPrefrenced << endl;
}