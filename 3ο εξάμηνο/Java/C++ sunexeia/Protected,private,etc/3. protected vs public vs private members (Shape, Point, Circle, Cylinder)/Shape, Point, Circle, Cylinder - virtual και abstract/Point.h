#ifndef POINT_H
#define POINT_H

#include "Shape.h"

class Point:public Shape 
{
	public:
	   Point(int=0, int=0);
	   void setX(int);
	   void setY(int);
	   int getX() const;
	   int getY() const;
	   
	   virtual string getName() const;
	   virtual void print() const;

	private:
	   int x, y;
};
#endif
