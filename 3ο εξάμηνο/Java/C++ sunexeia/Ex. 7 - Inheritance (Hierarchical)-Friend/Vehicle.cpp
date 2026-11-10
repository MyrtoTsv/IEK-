#include "Vehicle.h"

int Vehicle::count=0;

int Vehicle::getCount()
{
	return count;
}

Vehicle::Vehicle(string id, int speed, int attack, int defense)
{
	setAll(id, speed, attack, defense);
	count++;
	cout<<"CONSTRUCTING Vehicle ";
	print();
	cout<<endl;
}

Vehicle::~Vehicle()
{
	cout<<"DESTROYING Vehicle ";
	print();
	cout<<endl;
	count--;
}

void Vehicle::setAll(string id, int speed, int attack, int defense)
{
	setId(id);
	setSpeed(speed);
	setAttack(attack);
	setDefense(defense);
}

void Vehicle::setId(string id)
{
	this->id = id;
}

void Vehicle::setSpeed(int speed)
{
	this->speed = speed;
}

void Vehicle::setAttack(int attack)
{
	this->attack = attack;
}

void Vehicle::setDefense(int defense)
{
	this->defense = defense;
}

string Vehicle::getId() const
{
	return id;
}

int Vehicle::getSpeed() const
{
	return speed;
}

int Vehicle::getAttack() const
{
	return attack;
}

int Vehicle::getDefense() const
{
	return defense;
}

void Vehicle::print() const
{
	cout<<"Number "<<getCount()
	    <<" Object "<<getId()<<" with values "
		<<getSpeed()<<" "<<getAttack()<<" " 
		<<getDefense();
}
