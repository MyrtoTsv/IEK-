#include "Vehicle.h"

int main()
{
	Vehicle v1,v2,v3;
	cout<<"Constructing OBJECT with default values\n";
	cout<<"----------------------------------\n";
	v1.print();
	cout<<"\n";
	
	cout<<"Constructing OBJECT with new values\n";
	cout<<"----------------------------------\n";
	v2.setAll("Motorcycle",33,80,43);
	v2.print();
	cout<<"\n";
	
	cout<<"Constructing OBJECT with new values\n";
	cout<<"----------------------------------\n";
	v3.setAll("Bus",100,30,47);
	v3.print();
	cout<<"\n";
	
    //Edw tha ektupwsei to noumero twn objects pou dhmiourgithikan
    cout << "Objects: "<< Vehicle::getCount()<< endl;
	cout<<endl;
    return 0;
    
}//Edw tha kalestei o destructor me seira LIFO
