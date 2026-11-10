#include "Point.h"

Point::Point(int xValue, int yValue): x(xValue), y(yValue)
{

}

void Point::setX(int xValue)
{
   x = xValue;
}

int Point::getX() const
{
   return x;
}

void Point::setY(int yValue)
{
   y = yValue;
}

int Point::getY() const
{
   return y;
}

string Point::getName() const //δεν πρέπει να ξαναγράψω ότι είναι virtual
{                             //το virtual γράφεται μόνο μέσα στην class
   return "Point";
}

void Point::print() const//δεν πρέπει να ξαναγράψω ότι είναι virtual
{                        //το virtual γράφεται μόνο μέσα στην class
   cout<<"["<<getX()<<", "<<getY()<<"]";
}
