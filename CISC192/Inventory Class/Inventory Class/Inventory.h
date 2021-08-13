// PC 13.6 - Inventory Class
// ----------------------------------------------------------------------
// Programmer: Daren Shamoun
// Date: 05/22/2021
// ----------------------------------------------------------------------
// 
// 
// ---------1---------2---------3---------4---------5---------6---------7
// 1234567890123456789012345678901234567890123456789012345678901234567890

#pragma once
#include <string>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Inventory
{
private:
	int itemNumber;
	string description;
	int quantity;
	double cost;

public:
	Inventory();
	Inventory(int itemNumber, string description,
		int quantity, double cost);

};

