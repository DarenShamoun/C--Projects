#include <iostream>
using namespace std;

int tuna = 20;

int main()
{
	int tuna = 69;
	cout << ::tuna << endl; // the :: before the tuna variable tells the function to use the global tuna variable not the one in the main
}