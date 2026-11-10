#include "Cylinder.h"

Cylinder::Cylinder(int xValue, int yValue, double radiusValue, double heightValue):Circle(xValue, yValue, radiusValue)
{
   setHeight( heightValue );
}

void Cylinder::setHeight(double heightValue)
{
   height = ((heightValue<0.0) ? 0.0 : heightValue);
}

double Cylinder::getHeight() const
{
   return height;
}

double Cylinder::getArea() const
{
   return 2 * Circle::getArea() + getCircumference() * getHeight();
}

double Cylinder::getVolume() const
{
   return Circle::getArea() * getHeight();
}

void Cylinder::print() const
{
   Circle::print();
   cout << "Height = " << getHeight()<<" monades.\n";
}
