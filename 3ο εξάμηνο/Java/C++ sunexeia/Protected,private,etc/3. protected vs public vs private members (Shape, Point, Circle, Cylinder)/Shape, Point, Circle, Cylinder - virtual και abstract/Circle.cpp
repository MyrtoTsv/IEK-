#include "Circle.h"

Circle::Circle(int xValue, int yValue, double radiusValue):Point( xValue, yValue )  // call base-class constructor
{
   setRadius(radiusValue);
}
 
void Circle::setRadius(double radiusValue)
{
   radius = (radiusValue < 0.0 ? 0.0 : radiusValue);
}

double Circle::getRadius() const
{
   return radius;
}

double Circle::getDiameter() const
{
   return 2 * getRadius();
}

double Circle::getCircumference() const
{
   return 3.14159 * getDiameter();
}

double Circle::getArea() const
{
   return 3.14159 * getRadius() * getRadius();
}

string Circle::getName() const
{
   return "Circle";
}

void Circle::print() const
{
   cout << "center is ";
   Point::print();
   cout << "; radius is " << getRadius();
} 
