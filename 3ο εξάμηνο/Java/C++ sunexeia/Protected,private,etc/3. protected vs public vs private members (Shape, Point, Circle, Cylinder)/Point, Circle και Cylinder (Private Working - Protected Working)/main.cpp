#include "Cylinder.h"

int main()
{
	
	//POINT OBJECT
	Point p1;
	p1.print();
	cout<<"------------------------------\n";
	Point p2(1,-1);
	p2.print(); 
	
	cout<<"------------------------------\n";
	
	//CIRCLE OBJECT
	Circle c1;
	c1.print();
	cout<<"Diametros: "<<c1.getDiameter()<<" monades."<<endl;
	cout<<"Perimetros: "<<c1.getCircumference()<<" monades."<<endl;
	cout<<"Emvadon: "<<c1.getArea()<<" tetragwnikes monades.\n"<<endl;
	cout<<"------------------------------\n";
	Circle c2(2,-3,9.2);
	c2.print();
	cout<<"Diametros: "<<c2.getDiameter()<<" monades."<<endl;
	cout<<"Perimetros: "<<c2.getCircumference()<<" monades."<<endl;
	cout<<"Emvadon: "<<c2.getArea()<<" tetragwnikes monades.\n"<<endl;
	
	cout<<"------------------------------\n";
	//CYLINDER OBJECT
	Cylinder cyl1;
	cyl1.print();
	cout<<"Diametros: "<<cyl1.getDiameter()<<" monades."<<endl;
	cout<<"Perimetros: "<<cyl1.getCircumference()<<" monades."<<endl;
	cout<<"Emvadon: "<<cyl1.getArea()<<" tetragwnikes monades."<<endl;
	cout<<"Ogkos: "<<cyl1.getVolume()<<" kivikes monades.\n"<<endl;
	cout<<"------------------------------\n";
	Cylinder cyl2(2,-3,9.2, 4.0);
	cyl2.print();
	cout<<"Diametros: "<<cyl2.getDiameter()<<" monades."<<endl;
	cout<<"Perimetros: "<<cyl2.getCircumference()<<" monades."<<endl;
	cout<<"Emvadon: "<<cyl2.getArea()<<" tetragwnikes monades."<<endl;
	cout<<"Ogkos: "<<cyl2.getVolume()<<" kivikes monades.\n"<<endl;
	
	system("PAUSE");
	return 0;
}
