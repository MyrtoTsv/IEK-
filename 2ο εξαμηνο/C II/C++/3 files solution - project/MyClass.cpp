#include <iostream> 
using namespace std;

#include "MyClass.h"

void MyClass::setName(string temp)
{
	name=temp;
}

void MyClass::setValue(int temp)
{
	value=temp;
}

void MyClass::setAll(string temp1, int temp2)
{
	setName(temp1);
	setValue(temp2);
}

string MyClass::getName() const
{
	return name;
}

int MyClass::getValue() const
{
	return value;
}

void MyClass::print() const
{
	cout<<"Name:"<<name <<" and Value:" <<value <<endl;
}


