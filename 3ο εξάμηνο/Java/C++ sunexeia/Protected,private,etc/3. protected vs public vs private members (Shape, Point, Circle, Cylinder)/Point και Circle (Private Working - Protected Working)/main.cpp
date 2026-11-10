#include "Circle.h"

int main()
{
	//POINT OBJECT
	Point p1; //default constructor call
	p1.print();
	cout<<"------------------------------\n";
	Point p2(1,-1);
	p2.print(); 
	cout<<"------------------------------\n";
	
	//CIRCLE OBJECT
	Circle c1; //default constructor call
	c1.print();
	cout<<"Diametros: "<<c1.getDiameter()<<" monades."<<endl;
	cout<<"Perimetros: "<<c1.getCircumference()<<" monades."<<endl;
	cout<<"Emvadon: "<<c1.getArea()<<" tetragwnikes monades."<<endl;
	cout<<"------------------------------\n";
	Circle c2(1,-1,9.2);
	c2.print();
	cout<<"Diametros: "<<c2.getDiameter()<<" monades."<<endl;
	cout<<"Perimetros: "<<c2.getCircumference()<<" monades."<<endl;
	cout<<"Emvadon: "<<c2.getArea()<<" tetragwnikes monades."<<endl;
	cout<<"------------------------------\n";
	
	system("PAUSE");
	return 0;
}
