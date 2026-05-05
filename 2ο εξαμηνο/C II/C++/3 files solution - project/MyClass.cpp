#include <iostream> 
using namespace std;

#include "MyClass.h"

//deafault constructor
MyClass::MyClass()
{
	setAll("NULL",0); //anti na kaloume poses setters, vazoume thn setAll
}

// void MyClass::setName(string temp)
// {
// 	name=temp;
// }

//Allazoume ta temp me ta pragmataika onomata gia na einai pio sunnenohshma
//To this mas voithaei na deiksoume oti auto to name , this.name theloume na einai to private name
//To private name , na ginei oso to proswrino

//To this , sunithws einai stous setters.Stous getters den xreiazetai , giati thn getter exei mono mia name , thn private
//Oi setters epidh exoun duo name
void MyClass::setName(string name)
{
	this->name = name;
}

void MyClass::setValue(int value)
{
	this->value = value;
}

void MyClass::setAll(string name, int value)
{
	setName(name);
	setValue(value);
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


