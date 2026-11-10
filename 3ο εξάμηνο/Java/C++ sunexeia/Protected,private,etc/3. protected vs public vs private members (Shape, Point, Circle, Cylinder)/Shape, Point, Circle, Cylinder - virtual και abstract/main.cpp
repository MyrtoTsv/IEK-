#include "Cylinder.h"

// make virtual function calls off a base-class pointer
// using dynamic binding
void virtualViaPointer(const Shape *baseClassPtr)
{
   cout<<baseClassPtr->getName()<<": ";
   baseClassPtr->print();
   cout<<"\narea is "<<baseClassPtr->getArea()<<"\nvolume is "<<baseClassPtr->getVolume()<<"\n\n";
}

// make virtual function calls off a base-class reference
// using dynamic binding
void virtualViaReference(const Shape &baseClassRef)
{
   cout<<baseClassRef.getName()<<": ";
   baseClassRef.print();
   cout<<"\narea is "<<baseClassRef.getArea()<<"\nvolume is "<<baseClassRef.getVolume()<<"\n\n";
}

int main()
{
   cout<<fixed<<setprecision(2);
   Point point(7, 11);
   Circle circle(22, 8, 3.5);
   Cylinder cylinder(10, 10, 3.3, 10);

   cout<<point.getName()<<": ";
   point.print();
   cout<<"\n";

   cout<<circle.getName()<<": ";
   circle.print();
   cout<<"\n";

   cout<<cylinder.getName()<<": ";
   cylinder.print();
   cout<<"\n\n";

   // create vector/array of three base-class pointers
   //vector <Shape *> shapeVector(3);  
   Shape* shapeVector[3];

   shapeVector[0] = &point;
   shapeVector[1] = &circle;
   shapeVector[2] = &cylinder;

   cout<<"\nVirtual function calls made of base-class pointers:\n\n";
   for(int i=0; i<3; i++)//i<shapeVector.size(); i++) 
      virtualViaPointer(shapeVector[i]);

   cout<<"\nVirtual function calls made of "<<"base-class references:\n\n";
   for (int j=0; j<3; j++)//<shapeVector.size(); j++) 
      virtualViaReference(*shapeVector[j]);

   return 0;
}


