// PC 13.6 - Inventory Class
// ----------------------------------------------------------------------
// Programmer: Daren Shamoun
// Date: 05/22/2021
// ----------------------------------------------------------------------
// This program demonstrates the Inventory class by creating an vector
// of Inventory class instances from a data file.
// ---------1---------2---------3---------4---------5---------6---------7
// 1234567890123456789012345678901234567890123456789012345678901234567890

#include "inventory.h"
#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
#include <vector>
using namespace std;

// makes the textfile name globally accessible
const string TEXTFILE = "Inventory.txt";

//the functions that process data from the vector
int loadInventory(vector<Inventory>& list);
void display(const Inventory& rec);
void display(const vector<Inventory>& list);

int main()
{
    //defines the size of the array
	const int ARRAY_SIZE = 5;

    //defines the inventory vector
	vector<Inventory> inventory;

    //checks if the vector read anything
	if (loadInventory(inventory) == -1)
		return -1;

    //displays the contents of the inventory vector
	display(inventory);

	return 0;
}

//reads from the text file and inputs data into the Inventory array
int loadInventory(vector<Inventory>& list)
{
    int itemNumber;
    string description;
    int quantity;
    double cost;

    ifstream inFile;

    inFile.open(TEXTFILE);

    if (inFile.fail())
    {
        cout << "File \"" << TEXTFILE << "\" not found.\n\n";
        return -1;
    }

    while (!inFile.eof())
    {
        inFile >> itemNumber;
        inFile.ignore();
        getline(inFile, description);
        inFile >> quantity;
        inFile >> cost;

        Inventory rec(itemNumber, description, quantity, cost);
        list.push_back(rec);
    }

    inFile.close();

    return 0;
}

//displays a singular item from the stored array
void display(const Inventory& rec)
{
    cout << "   Item number: " << rec.getItemNumber() << endl;
    cout << "   Description: " << rec.getDescription() << endl;
    cout << "   Quantity: " << rec.getQuantity() << endl;
    cout << "   Cost: " << rec.getCost() << endl << endl;
}

//overloaded function that prints the entire array of items
void display(const vector<Inventory>& list)
{
    cout << "\n  The stores inventory is shown below: \n\n";
    for (int i = 0; i < list.size(); i++)
    {
        display(list[i]);
    }
}