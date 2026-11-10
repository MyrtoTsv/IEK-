#ifndef SHAPE_H
#define SHAPE_H

#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
using namespace std;

class Shape 
{
	public:
	   virtual double getArea() const;
	   virtual double getVolume() const;
	   virtual string getName() const=0;
	   virtual void print() const=0;
};
#endif
