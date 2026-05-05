#include <iostream>
#include <cstdlib>
using namespace std;

class MyClass
{
	private:
		 string name;
		 int value; 
		 
	public:
		void setName(string temp)
		{	
			name = temp;
		}
		
		void setValue(int temp)
		{
			value = temp;
		} 
		
		void setAll(string temp1, int temp2)
		{
			setName(temp1);
			setValue(temp2);
		}
		
		string getName(void)
		{
		 	return name;
		}
		 
		int getValue(void)
		{
		 	return value;
		}
		 
		void print()
		{
		 	cout<<"The value of "<<getName()<<" is "<<getValue()<<".\n";
		}
};

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
