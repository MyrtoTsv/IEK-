#include <iostream>
#include <cstdlib>
using namespace std;

#include "MyClass.h"
template <class myGenericVariable>

void myGenericVariable mySwap(myGenericVariable *,myGenericVariable *);

int main()
{
	int i = 1, j = 2;
	string name1 = "COACH", name = "IRA";
	MyClass obj1("COACH",1), obj2("IRA",2);
	
	cout<<"-----------------------------------------------\n\n");
	cout<<"ARXIKES TIMES INTEGERS:";
	cout<<i <<" "<<j <<endl;
	
	cout<<"NEES TIMES INTEGERS:";
	mySwap(&i, &j); //INTEGERS SWAP
	cout<<i <<" "<<j <<endl;
	
	cout<<"\n";
	cout<<"------------------------------------------------\n\n");
	
	cout<<"ARXIKES TIMES STRINGS:";
	cout<<name1 <<" "<<name2 <<endl;
	mySwap(&name1, &name2); //STRINGS SWAP
	cout<<"NEES TIMES STRINGS:";
	cout<<name1 <<" " <<name2 <<endl;
	
	cout<<"\n";
	cout<<"------------------------------------------------\n\n");
	
	cout<<"ARXIKES TIMES OBJECTS 1 & 2:";
	obj1.print();
	cout<<" , "; //Ektipwnei to komma(,)
	obj2.print();
	mySwap(&obj1, &obj2); //OBJECTS SWAP
	cout<<"\nNEES TIMES OBJECTS 1 & 2:";
	obj1.print();
	cout<<" , "; //Ektipwnei to komma (,)
	obj2.print();

	cout<<"\n\n";
	cout<<"------------------------------------------------------------------\n\n";

	system("PAUSE");
	return 0;
}

//gia na kanoume epityxws swap , prepei na xrhsimopoihsoume pointers
//gia na deixnoun se oti theloume kathe fora
void mySwap(myGenericVariable *value1,myGenericVariable *value2)
{
	myGenericVariable temp = *value;
	*value1 = *value2;
	*value2 = temp;
}

	
