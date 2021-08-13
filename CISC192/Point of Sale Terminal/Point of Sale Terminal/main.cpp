// MTP - Point of Sale Terminal
// ----------------------------------------------------------------------
// Programmer: Daren Shamoun
// Date: 04/26/2021
// ----------------------------------------------------------------------
//  Asks the user for product numbers and continues asking for numbers,  
//  until finally it adds up the prices of all the products.
// ---------1---------2---------3---------4---------5---------6---------7
// 1234567890123456789012345678901234567890123456789012345678901234567890

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

//prototypes the functions needed.
bool lookUp(int,string&,double&);
void formatOutput();
bool yesNo(string);

int main()
{
	//declaring the variables needed for the products.
	int prodNum;
	string prodDescription;
	double prodPrice;

	//declaring and initializing the variables for the total counters.
	int itemCount = 0;
	double totalPrice = 0.00;

	//displays the menu header.
	cout << "   " << "POS Terminal" << endl;
	cout << "   " << "------------------------------";

	//calls the formatting function. 
	formatOutput();

	//begins the loop 
	do
	{
		//asks for the prodcut number from user.
		cout << endl << "   " << "Enter a product number: ";
		cin >> prodNum;
		cin.ignore();

		//checks the if the user input was valid.
		if (lookUp(prodNum, prodDescription, prodPrice))
		{
			//increases counter by one and accumulator by item price.
			totalPrice += prodPrice;
			itemCount++;
		}
		else
		{
			//statement prints when input is invalid.
			cout << "   " << "No such product." << endl;
		}
	} 
	//runs the loop based on the response to the "yesNo" function
	while (yesNo("More?"));

	//print the final counter and accumulator values.
	cout << endl << "   " << "Total: $" << totalPrice << endl;
	cout << "   " << "Count: " << itemCount << endl << endl;
}

//based on user input checks the values against
//the available product numbers
bool lookUp(int prodNum,string& description, double& price)
{	
	//checks if the value entered is valid.
	if(prodNum == 1025 || prodNum == 1520 || prodNum == 1623 || 
		prodNum == 1788 || prodNum == 1800 || prodNum == 1852 ||
		prodNum == 1975)
	{
		//chooses what to set the value of "description" and
		//"price" variables based on user entry.
		switch (prodNum)
		{
		case 1025:
			description = "Delimiter, McCormick";
			price = 12.99;
			cout << "   " << description << " - $" << price << endl;
			return true;
		case 1520:
			description = "Decoupler, Jansborough";
			price = 0.75;
			cout << "   " << description << " - $" << price << endl;
			return true;
		case 1623:
			description = "Transducer, Drummond";
			price = 0.88;
			cout << "   " << description << " - $" << price << endl;
			return true;
		case 1788:
			description = "Transformer, Smitty";
			price = 8.90;
			cout << "   " << description << " - $" << price << endl;
			return true;
		case 1800:
			description = "Doohickey, 12cm";
			price = 9.10;
			cout << "   " << description << " - $" << price << endl;
			return true;
		case 1852:
			description = "Doohickey, 8cm";
			price = 8.90;
			cout << "   " << description << " - $" << price << endl;
			return true;
		case 1975:
			description = "Crimper, 5mm";
			price = 19.99;
			cout << "   " << description << " - $" << price << endl;
			return true;
		}
	}
	else
	{
		//when false the value did not match one on the list.
		return false;
	}
	
}

//formats the output to a standard two decimal points.
void formatOutput()
{
	cout << fixed << setprecision(2) << endl;
}

//accepts a string as the prompt and 
//uses it to print the yes or no question.
bool yesNo(string prompt)
{
	char response;
	string input;

	//begins the loop to check if the user wants to add another item.
	do 
	{
		cout << endl << "   " << prompt << " (y/n): ";
		getline(cin, input);
		response = toupper(input.at(0));
		if (response == 'Y')
		{
			return true;
		}
	} 
	//runs the loop until the user 
	//inputs a string starting with 'Y' or 'N'
	while (response != 'Y' && response != 'N');
	return false;
}