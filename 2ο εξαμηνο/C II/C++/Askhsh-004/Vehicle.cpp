#include <iostream> 
using namespace std;

#include "Vehicle.h"

//custom constructor
Vehicle::Vehicle(string id,int speed,int attack,int defense,int range)
{
	setAll(id,speed,attack,defense,range);
}

//h setAll exei olous tous setters giati kanei set se ola
void Vehicle::setAll(string id,int speed,int attack,int defense,int range)
{
	setId(id);
	setSpeed(speed);
	setAttack(attack);
	setDefense(defense);
	setRange(range);
}

void Vehicle::setId(string id)
{
	if (id == "Recon" || id == "Light" || id == "Medium" || id == "Heavy"){
		this->id = id;	
	}else{
		this->id = "\0";
	}
}

void Vehicle::setSpeed(int speed)
{
	if (speed >=30 && speed <=100){
		this->speed = speed;
	}else{
		this->speed = 30;
	}
		
}

void Vehicle::setAttack(int attack)
{
	if (attack >=1 && attack <=10){
		this->attack = attack;
	}else{
		this->attack = 1;
	}
}

void Vehicle::setDefense(int defense)
{
	if (defense >=1 && defense <=20){
		this->defense = defense;
	}else{
		this->defense = defense;
	}
}

void Vehicle::setRange(int range)
{
	if (range >=1 && range <=6){
		this->range = range;
	}else{
		this->range = range;
	}
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

int Vehicle::getRange() const
{
	return range;
}

int Vehicle::getDefense() const
{
	return defense;
}

//h print exei olous tous getters gt tupwnei ta apotelesmata
void Vehicle::print() const
{
	cout<<getId()<<endl;
	cout<<getSpeed()<<endl;
	cout<<getAttack()<<endl;
	cout<<getRange()<<endl;
	cout<<getDefense()<<endl;
	
}

