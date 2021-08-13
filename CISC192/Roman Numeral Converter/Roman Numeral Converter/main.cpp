// PC 4.2 - Roman Numeral Converter
// ----------------------------------------------------------------------
// Programmer: Daren Shamoun
// Date: 04/16/2021
// ----------------------------------------------------------------------
// This program converts the number inputted into roman numerals
// 
// ---------1---------2---------3---------4---------5---------6---------7
// 1234567890123456789012345678901234567890123456789012345678901234567890

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

int main()
{
	//Declaring and initializing variables.
	int arabicNumeral;
	string romanNumeral = "";

	//Taking input from user.
	cout << "Input a number 1-10 to convert into roman numerals: \n\n";
	cin >> arabicNumeral;
	
	//Input validation.
	if (arabicNumeral < 1 || arabicNumeral > 10)
	{
		cout << "\nThe number input was invalid.\n\n";
		return -1;
	}
	
	//Choosing the correct case. 
	switch (arabicNumeral)
	{
		case(1): romanNumeral = "I";
			break;
		case(2): romanNumeral = "II";
			break;
		case(3): romanNumeral = "III";
			break;
		case(4): romanNumeral = "IV";
			break;
		case(5): romanNumeral = "V";
			break;
		case(6): romanNumeral = "VI";
			break;
		case(7): romanNumeral = "VII";
			break;
		case(8): romanNumeral = "VIII";
			break;
		case(9): romanNumeral = "IX";
			break;
		case(10): romanNumeral = "X";
			break;
	}

	//output
	cout << "\nThe Roman numeral for " << arabicNumeral
		<< " is " << romanNumeral << ".\n\n";
	return 0;
}