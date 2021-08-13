// PC FP3 - McInerney's Office Supply
// ----------------------------------------------------------------------
// Programmer: Daren Shamoun
// Date: 05/24/2021
// ----------------------------------------------------------------------
// Asks the user for a product number to look up and then prints the
// description and price of that product.
// ---------1---------2---------3---------4---------5---------6---------7
// 1234567890123456789012345678901234567890123456789012345678901234567890

#include <iostream>
using namespace std;

//declares all the arrays to store data globally for easy access
int productNumbers[3] = { 504728, 543280, 664011 };
string productDescription[3] = { "Post It Notes, 3 x 3, pack of 12",
"Manila Folders, Letter Size, Box of 100",
"Bic Round Stick Ballpoint Pens, Box of 60" };
double productPrice[3] = { 20.49, 10.89, 6.99 };

//prototypes of necessary functions
int getItemNumber();
int findItem(int itemNumber);
void displayItem(int index);

int main()
{
	int index;
	int itemNumber;
	string description;
	double price;

	//recieves the user input for the item number
	itemNumber = getItemNumber();

	//checks to see if the user entered "0" to close the program
	while (itemNumber != 0)
	{
		index = findItem(itemNumber);

		//checks to see if the number is valid and if it is display 
		//the description and price
		if (index == -1)
		{
			cout << "   " << "Invalid item number.\n";
		}
		else
		{
			displayItem(index);
		}

		itemNumber = getItemNumber();
	}

	return 0;
}

//gets user input for the item number
int getItemNumber()
{
	int itemNumber;
	cout << "\n   " << "Enter item number: ";
	cin >> itemNumber;
	return itemNumber;
}

//finds the item number in the array and returns its index
int findItem(int itemNumber)
{
	for (int index = 0; index < 3; index++)
	{
		if (productNumbers[index] == itemNumber)
		{
			return index;
		}
	}
	return -1;
}

//displays the description and price of the item.
void displayItem(int index)
{
	cout << "   " << "Description: " 
		<< productDescription[index] << endl;
	cout << "   " << "Price: $" 
		<< productPrice[index] << endl;
}