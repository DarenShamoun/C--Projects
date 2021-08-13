// PC 13.6 - Inventory Class
// ----------------------------------------------------------------------
// Programmer: Daren Shamoun
// Date: 05/22/2021
// ----------------------------------------------------------------------
// This is the header file which is a specification of the inventory
// class and prototypes the member functions and private variables
// ---------1---------2---------3---------4---------5---------6---------7
// 1234567890123456789012345678901234567890123456789012345678901234567890

#pragma once
#include <string>
#include <iostream>
#include <string>
using namespace std;

class Inventory
{
//can only be accessed by the member functions
private:
	int itemNumber;
	string description;
	int quantity;
	double cost;

public:
//the constructors 
	Inventory();
	Inventory(int itemNumber, string description,
		int quantity, double cost);

//the mutator member function prototypes
	void setItemNumber(int itemNumber);
	void setDescription(string description);
	void setQuantity(int quantity);
	void setCost(double cost);

//the accessor member function prototypes
	int getItemNumber() const;
	string getDescription() const;
	int getQuantity() const;
	double getCost() const;
	double getTotalCost() const;
};

