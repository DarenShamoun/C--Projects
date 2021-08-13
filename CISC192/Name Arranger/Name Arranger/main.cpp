// PC 10.7 - Name Arranger
// ----------------------------------------------------------------------
// Programmer: Daren Shamoun
// Date: 05/15/2021
// ----------------------------------------------------------------------
// This program accepts a First, Middle and Last name and displays them 
// in the format "Last, First Middle".
// ---------1---------2---------3---------4---------5---------6---------7
// 1234567890123456789012345678901234567890123456789012345678901234567890

#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int main()
{
	//determines the maximum length of each name array
	const int MAX_NAME_LENGTH = 20;

	//declares the arrays that will hold the names
	char firstName[MAX_NAME_LENGTH + 1];
	char middleName[MAX_NAME_LENGTH + 1];
	char lastName[MAX_NAME_LENGTH + 1];
	char fullName[sizeof firstName +
		sizeof middleName + sizeof lastName + 6] = "";

	//displays the programs header explaining the program
	cout << "   " << "This program formats your name nicely!\n";
	cout << "   " << "The maximum number of characters you "
		<< "can input at a time is: " << MAX_NAME_LENGTH << endl << endl;

	//asks for input for the names
	cout << "   " << "Enter your first name: ";
	cin.getline(firstName, sizeof firstName);

	cout << "   " << "Enter your middle name: ";
	cin.getline(middleName, sizeof middleName);

	cout << "   " << "Enter your last name: ";
	cin.getline(lastName, sizeof lastName);

	//combines all other char arrays into the fullname array
	//as well as adding the punctuation into the array
	strcat_s(fullName, lastName);
	strcat_s(fullName, ", ");
	strcat_s(fullName, firstName);
	strcat_s(fullName, " ");
	strcat_s(fullName, middleName);

	//displays the fullName array after all components are added
	cout << "\n   " << "Here is your formatted name: ";
	cout << "\n   " << fullName << endl << endl;
}