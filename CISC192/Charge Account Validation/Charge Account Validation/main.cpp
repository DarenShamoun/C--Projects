// PC 8.4 - Charge Account Validation
// ----------------------------------------------------------------------
// Programmer: Daren Shamoun
// Date: 05/07/2021
// ----------------------------------------------------------------------
// Performs a binary search to locate valid account numbers.
//
// ---------1---------2---------3---------4---------5---------6---------7
// 1234567890123456789012345678901234567890123456789012345678901234567890

#include <iostream>
#include <string>
#include <fstream>
using namespace std;

//Size of array holding account IDs
const int SIZE = 18;

//Function Prototypes
bool binarySearch(long array[], int numElems, int accountNumber);
int getAccNum();

int main()
{
    //Array holding account IDs
    long accounts[SIZE] = {
            1005231, 1250255, 1302850,
            3852085, 4520125, 4562555,
            4581002, 5050552, 5552012,
            5658845, 6545231, 7576651,
            7825877, 7881200, 7895122,
            8080152, 8451277, 8777541 };
    
    int accountNumber;
    bool index;

    //gets the account number input from the user
    accountNumber = getAccNum();

    //assigns the output bool to the index variable
    index = binarySearch(accounts, SIZE, accountNumber);

    //checks if the value was ever found in the binary sort
    if (index)
    {
        cout << endl << "The number you entered is valid. \n\n";
    }
    else
    {
        cout << endl << "The number you entered is invalid. \n\n";
    }

}

bool binarySearch(long array[], int numElems, int accountNumber)
{
      int first = 0, 	// First array element
          last = (numElems - 1), 	// Last array element
                  middle, 	// Midpoint of search
                  position = -1; 	// Position of search value
          bool found = false; 	// Flag
    
              while (!found && first <= last)
              {
                  middle = (first + last) / 2; // Calculate midpoint
                  if (array[middle] == accountNumber)  // If value is found at mid
                      {
                          found = true;
                          position = middle;
                      }
                  else if (array[middle] > accountNumber) // If value is in lower half
                          last = middle - 1;
                  else
                          first = middle + 1;// If value is in upper half
              }
          return found;
}

//gets input from user
int getAccNum()
{
    int accNum;
    cout << "Enter the account number you wish to validate: ";
    cin >> accNum;
    return accNum;
}