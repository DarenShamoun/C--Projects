#include<iostream>
using namespace std;

class StankFist
{
public:
	StankFist() { stinkyVar = 0; }
private:
	int stinkyVar;
	
friend void stinkysFriend(StankFist &sfo);
// the prefix friend gives permission to that function to use variables from the class
};

void stinkysFriend(StankFist& sfo)
{
	sfo.stinkyVar = 99;
	cout << sfo.stinkyVar << endl;
}

int main()
{
	StankFist bob;
	stinkysFriend(bob);
}