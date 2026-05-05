#include <iostream>
#include <cstdlib>
using namespace std;

class MyClass
{
	private:
		string name;
		mutable int value; 	//Το mutable παρακάμπτει την const
		 
	public:
		void setName(string);
		void setValue(int );
		void setAll(string , int);
		string getName() const;		//Η const λειτουργεί ως μια έξτρα δόση 
		int getValue() const;   	// ασφάλειας στον κώδικα μας έτσι ώστε
		void print() const;			// οι τιμές των μεταβλητών να μην αλλάξουν
};

void MyClass::setName(string temp)
{
	name = temp;
}

void MyClass::setValue(int temp)
{
	value = temp;
}

void MyClass::setAll(string temp1, int temp2)
{
	setName(temp1);
	setValue(temp2);
}

string MyClass::getName() const
{
	return name;
}

int MyClass::getValue() const
{
	value = 25;	//Λειτουργεί λόγω του mutable
	return value;
}

void MyClass::print() const
{
	cout<<"The value of "<<getName()<<" is "<<getValue()<<".\n";
}

int main()  
{  
	MyClass class1, class2; 
	string name1; 
	int value1; 
	 
	cout << "\nInitial values for object 1" << endl; 
	cout << "_____________________________" << endl; 
	class1.print();
	 
	cout << "\nInitial values for object 2" << endl; 
	cout << "_____________________________" << endl; 
	class2.print(); 
	  
	cout << "\n\nGive a name for object 1: ";
	cin >> name1;
	class1.setName(name1); 
	class1.print();
	 
	cout << "\nGive a value for object 1: ";
	cin >> value1; 
	class1.setValue(value1);
	class1.print();
		  
	cout << "\n\nGive a name and a value for object 2: "; 
	cin >> name1 >> value1; 
	class2.setAll(name1, value1); 
	class2.print(); 
		   
	system("PAUSE");
	return 0; 
}
