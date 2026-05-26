#include "Vehicle.h"

int Vehicle::count=0;

int Vehicle::getCount()
{
    return count;
}
//custom constructor
Vehicle::Vehicle(string id,int speed,int attack,int defence)
{
	setAll(id,speed,attack,defence);
    count++;
	cout<<"CONSTRUCTING Number "<<getCount() <<"Object "<<id <<"with values "<<speed <<" " <<attack<<
    " " <<defence <<"\n";
}

//destructor
~Vehicle::Vehicle()
{
	
}

//h setAll exei olous tous setters giati kanei set se ola
void Vehicle::setAll(string id,int speed,int attack,int defence)
{
	setId(id);
	setSpeed(speed);
	setAttack(attack);
	setDefense(defence);
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
	this->attack=attack;
}

void Vehicle::setDefence(int defence)
{
	this->defence=defence;
}

static int Vehicle::getCount() const
{
	this->count=count;
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

int Vehicle::getDefence() const
{
	return defence;
}

//h print exei olous tous getters gt tupwnei ta apotelesmata
void Vehicle::print() const
{
	cout<<getCount()<<endl;
	cout<<getId()<<endl;
	cout<<getSpeed()<<endl;
	cout<<getAttack()<<endl;
	cout<<getDefence()<<endl;
	
}
