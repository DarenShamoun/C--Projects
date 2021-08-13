// PC 13.6 - Inventory Class
// ----------------------------------------------------------------------
// Programmer: Daren Shamoun
// Date: 05/22/2021
// ----------------------------------------------------------------------
// This is the implementation of the Inventory class which defines its
// member fuinctions and constructors.
// ---------1---------2---------3---------4---------5---------6---------7
// 1234567890123456789012345678901234567890123456789012345678901234567890

#include "Inventory.h"
using namespace std;

//default member function which sets all base values to 0 if nothing is 
//input as paramaters
Inventory::Inventory()
{
	Inventory::itemNumber = 0;
	Inventory::description = "0";
	Inventory::quantity = 0;
	Inventory::cost = 0;
};

//this constructor works when paramaters are input and sets the values to 
//the inputted paramaters
Inventory::Inventory(int itemNumber, string description,
	int quantity, double cost)
{
	Inventory::itemNumber = itemNumber;
	Inventory::description = description;
	Inventory::quantity = quantity;
	Inventory::cost = cost;
};

//sets the item number
void Inventory::setItemNumber(int itemNumber)
{
	Inventory::itemNumber = itemNumber;
};

//sets the description of the item
void Inventory::setDescription(string description)
{
	Inventory::description = description;
};

//sets the quantity of items
void Inventory::setQuantity(int quantity)
{
	Inventory::quantity = quantity;
};

//sets the cost of items
void Inventory::setCost(double cost)
{
	Inventory::cost = cost;
};

//returns the item number
int Inventory::getItemNumber() const
{
	return itemNumber;
};

//returns the description of the item
string Inventory::getDescription() const
{
	return description;
};

//returns the number of items
int Inventory::getQuantity() const
{
	return quantity;
};

//returns the cost of the item
double Inventory::getCost() const
{
	return cost;
};

//returns the total cost of all the available items
double Inventory::getTotalCost() const
{
	return (quantity * cost);
};