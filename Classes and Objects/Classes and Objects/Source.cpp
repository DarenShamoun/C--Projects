#include <iostream>
using namespace std;

class BuckysClass 
{
	public:
		void coolSaying() 
		{
			cout << "preaching to the choir" << endl;
		}
};

int main()
{
	BuckysClass buckysObject;
	buckysObject.coolSaying();
	return 0;
}