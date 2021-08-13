// PC 13.6 - Inventory Class
// ----------------------------------------------------------------------
// Programmer: Daren Shamoun
// Date: 05/22/2021
// ----------------------------------------------------------------------
// 
// 
// ---------1---------2---------3---------4---------5---------6---------7
// 1234567890123456789012345678901234567890123456789012345678901234567890

#include "Inventory.h"
#include <string>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

Inventory::Inventory()
{
	Inventory::itemNumber = 0;
	Inventory::description = "0";
	Inventory::quantity = 0;
	Inventory::cost = 0;
};

Inventory::Inventory(int itemNumber, string description,
	int quantity, double cost)
{
	Inventory::itemNumber = itemNumber;
	Inventory::description = description;
	Inventory::quantity = quantity;
	Inventory::cost = cost;
	getTotalCost();
};

void setItemNumber(int itemNum)
{
	Inventory::itemNumber = itemNum;
};

void setDescription(string description)
{

};

void setQuantity(int quantity)
{

};

void setCost(double cost)
{

};

int getItemNumber()
{

};

string getDescription()
{

};

int getQuantity()
{

};

double getCost()
{

};

double getTotalCost()
{

};