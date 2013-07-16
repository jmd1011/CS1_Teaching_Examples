#include "class.h"

myClass::myClass()
{
	data = 0;
	data2 = 0;
}

myClass::myClass(int num, int num1)
{
	data = num;
	data2 = num1;
}

void myClass::setData(int temp)
{
	data = temp;
}

int myClass::getData()
{
	return data;
}