// PC 8.7 - Binary String Search
// ----------------------------------------------------------------------
// Programmer: Daren Shamoun
// Date: 05/07/2021
// ----------------------------------------------------------------------
// Searches an array of strings using the binary seach method.
// 
// ---------1---------2---------3---------4---------5---------6---------7
// 1234567890123456789012345678901234567890123456789012345678901234567890

#include <iostream>
#include <string>
using namespace std;

//sets the value that holds the number of items in the array
const int NUM_NAMES = 20;

//prototypes of the functions necissary
void selectionSort(string array[], int size);
int binarySearch(const string array[], int size, string value);

int main()
{
    //defines the array of names
    string names[NUM_NAMES] = {
            "Collins, Bill", "Smith, Bart", "Allen, Jim",
            "Griffin, Jim", "Stamey, Marty", "Rose, Geri",
            "Taylor, Terri", "Johnson, Jill",
            "Allison, Jeff", "Looney, Joe", "Wolfe, Bill",
            "James, Jean", "Weaver, Jim", "Pore, Bob",
            "Rutherford, Greg", "Javens, Renee",
            "Harrison, Rose", "Setzer, Cathy",
            "Pike, Gordon", "Holland, Beth" };
    
    //holds the result from the binarySearches return 
    int result;
    //the variable used to hold the user entered name
    string nameString;

    //sorts the array of names
    selectionSort(names, NUM_NAMES);

    //prompts the user for input
    cout << "\n"
        << "   Enter name: ";
    getline(cin, nameString);

    //assigns the return value to result variable
    result = binarySearch(names, NUM_NAMES, nameString);

    cout << "\n";

    //if the return value is -1 nothing was found
    if (result == -1)
        cout << "   " << nameString
        << " is not in the list.\n\n";
    //if the value was not -1 then print the string found
    else
        cout << "   " << names[result] << " found.\n\n";

    return 0;
}

void selectionSort(string array[], int size)
{
    //declares the variables needed to sort
    int minIndex;
    string minValue;

    //begins to scan through contents of the array
    for (int startScan = 0; startScan < (size - 1); startScan++)
    {
        //sets the first index value in the array to the minIndex variable 
        minIndex = startScan;
        //sets the first item in the array to the minValue variable
        minValue = array[startScan];
        //scans through the second item forward in the array
        for (int index = startScan + 1; index < size; index++)
        {
            //checks if the next item is less than the current minValue
            if (array[index] < minValue)
            {
                //if it is less then it becomes the new minValue
                minValue = array[index];
                minIndex = index;
            }
        }
        array[minIndex] = array[startScan];
        array[startScan] = minValue;
    }
}

int binarySearch(const string array[], int size, string value)
{
    int first = 0, 	// First array element
        last = (size - 1), 	// Last array element
        middle, 	// Midpoint of search
        position = -1; 	// Position of search value
    bool found = false; 	// Flag

    while (!found && first <= last)
    {
        middle = (first + last) / 2; // Calculate midpoint
        if (array[middle] == value)  // If value is found at mid
        {
            found = true;
            position = middle;
        }
        else if (array[middle] > value) // If value is in lower half
            last = middle - 1;
        else
            first = middle + 1;// If value is in upper half
    }
    return position;
}