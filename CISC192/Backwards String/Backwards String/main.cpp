// PC 10.2 - Backwards String Notes
// ----------------------------------------------------------------------
// Programmer: Daren Shamoun
// Date: 05/15/2021
// ----------------------------------------------------------------------
// This program accepts a string input from the user and returns the 
// string backwards.
// ---------1---------2---------3---------4---------5---------6---------7
// 1234567890123456789012345678901234567890123456789012345678901234567890

#include <iostream>
#include <cstring>
#include <string>
using namespace std;

void backwardString(char* str);

int main()
{
    //declared the max string size and two char arrays to hold the string
    const int MAX_STRING_LENGTH = 10;
    char originalString[MAX_STRING_LENGTH + 1];
    char copyString[MAX_STRING_LENGTH + 1];

    //displays the header explaining the program
    cout << "   " << "This program reverses the word you enter!\n\n";
    cout << "   " << "Enter a word 10 characters long or less: ";

    //recieves user input and stores it in the originalString variable
    cin.getline(originalString, (MAX_STRING_LENGTH + 1));

    //I had to use strcpy_s instead of strycpy because visual studio 
    //called strcpy unsafe I am not sure why exactly but it reccomended
    //using this instead. This copies the C-string to the copyString 
    //variable
    strcpy_s(copyString, originalString);

    //this function reverses the string but keeps the place of 
    //capitalized letters
    backwardString(copyString);

    //displays the final results of the swap comparing the 
    //original string to the reversed string.
    cout << "\n   \"" << originalString << "\" backwards is \""
        << copyString << "\".\n\n";
}

void backwardString(char* str)
{
    //the p pointer points to the first item in the string
    //the q pointer points to the last item in the string 
    char* p = str;
    char* q = str + strlen(str) - 1;
    char temp; //temporarily holds the value being swapped

    //checks if the cases of the values need to be swapped
    if (isupper(*p) && !isupper(*q))
    {
        //if conditions are met the cases of the first and
        //last values are swapped
        *q = toupper(*q);
        *p = tolower(*p);
    }

    //swaps positions of all values in the string starting from
    //the first and last and moving inwards
    while (p < q)
    {
        temp = *q;
        *q = *p;
        *p = temp;
        p++;
        q--;
    }
}