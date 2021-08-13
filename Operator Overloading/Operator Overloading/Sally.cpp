#include <iostream>
#include "sally.h"
using namespace std;

Sally::Sally()
{

}

Sally::Sally(int a)
{
	num = a;
}


Sally Sally::operator+(Sally aso) //aso = another sally object
{
	Sally brandNew;
	brandNew.num = num + aso.num;
	return(brandNew);
}