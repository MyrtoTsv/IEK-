#include <iostream>//για τα cin και cout
#include <cstdlib>//για τη main
#include <cmath>//για το Circle.cpp
using namespace std;

#ifndef POINT_H
#define POINT_H

class Point
{
	public:
		Point(int=0, int=0);
		void setX(int);
		int getX() const;
		void setY(int);
		int getY() const; 
		void print() const;
	private://Πλέον δουλεύει είτε με private είτε με protected λόγω του Circle.cpp
		int x,y;
};
#endif





















