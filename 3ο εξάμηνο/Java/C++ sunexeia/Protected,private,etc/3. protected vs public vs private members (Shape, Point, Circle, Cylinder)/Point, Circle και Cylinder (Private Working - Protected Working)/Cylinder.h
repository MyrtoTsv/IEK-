#ifndef CYLINDER_H
#define CYLINDER_H

#include "Circle.h"

class Cylinder:public Circle 
{

	public:
	   	Cylinder(int=0, int=0, double=0.0, double=0.0);    
	   	void setHeight(double );  
	   	double getHeight() const;   
		double getArea() const;    
		double getVolume() const;  
	   	void print() const;        
	private:
	   double height;  // Cylinder's height
};
#endif
