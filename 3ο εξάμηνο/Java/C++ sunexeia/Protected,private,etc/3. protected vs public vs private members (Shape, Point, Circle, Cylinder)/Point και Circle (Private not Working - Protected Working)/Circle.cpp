#include "Circle.h"

#define PI 3.14159

Circle::Circle(int xValue,int yValue,double r)//:x(xValue), y(yValue) Δε λειτουργεί αυτός ο τρόπος 
{	                                 //σε κληρονομούμενες μεταβλητές (είτε private, είτε protected)
    x=xValue;               
    y=yValue;
	setRadius(r);
}

void Circle::setRadius(double r)
{
	radius=r;
}

double Circle::getRadius() const
{
	return radius;
}

double Circle::getDiameter() const
{
	return 2*getRadius();
}

double Circle::getCircumference() const
{
	return PI*getDiameter();
}

double Circle::getArea() const
{
	return PI*pow(getRadius(),2);
}

void Circle::print() const
{
	cout<<"Center = ";
	Point::print();
	cout<<"Radius = "<<getRadius()<<" monades\n------------------------------\n";
}




