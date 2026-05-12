#include <iostream> 
using namespace std;

#include "GroundSquare.h"

//default constructor
GroundSquare::GroundSquare()
{
	setAll("Plain",0,0);
}

void GroundSquare::setAll(string type, int xCoord , int yCoord)
{
	setType(type);
	setXCoord(xCoord);
	setYCoord(yCoord);
}

void GroundSquare::setType(string newType)
{
	type = newType;
}

void GroundSquare::setXCoord(int newXCoord)
{
	if (newXCoord >= 0 && newXCoord <= 1000)
		xCoord = newXCoord;
	else 
		xCoord = 0;
}

void GroundSquare::setYCoord(int newYCoord)
{
	if (newYCoord >= 0 && newYCoord <= 1000)
		yCoord = newYCoord;
	else 
		yCoord = 0;
}

void GroundSquare::incrementXCoordBy(int newXCoord)
{
	if (getXCoord() + newXCoord >=0 && getXCoord() + newXCoord <=1000)
		setXCoord(getXCoord() + newXCoord);
}

void GroundSquare::incrementYCoordBy(int newYCoord)
{
	if (getYCoord() + newYCoord >=0 && getYCoord() + newYCoord <=1000)
		setYCoord(getYCoord() + newYCoord);
}

string GroundSquare::getType() const
{
	return type;
}

int GroundSquare::getXCoord() const
{
	return xCoord;
}


int GroundSquare::getYCoord() const
{
	return yCoord;
}

//h print exei olous tous getters gt tupwnei ta apotelesmata
void GroundSquare::print() const
{
	cout<<getType()<<endl;
	cout<<getXCoord()<<endl;
	cout<<getYCoord()<<endl;
}




