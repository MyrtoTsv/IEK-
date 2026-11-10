#include "Point.h"

Point::Point(int xValue,int yValue):x(xValue), y(yValue)  
{            //Λειτουργεί αυτός ο τρόπος σε μεταβλητές της ίδιας της κλάσης (είτε private, είτε protected)                                   
	//setX(xValue); ή x=xValue;               
    //setY(yValue); ή y=yValue;              
}

void Point::setX(int xValue)
{
	x=xValue;
}

int Point::getX() const
{
	return x;
}

void Point::setY(int yValue)
{
	y=yValue;
}

int Point::getY() const
{
	return y;
}

void Point::print() const
{
	cout<<"("<<getX()<<", "<<getY()<<")\n";
}
















