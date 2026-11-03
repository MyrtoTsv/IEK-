
#include <iostream>
using namespace std;

 
class Engine 
{
private:
string name;
    
public:
    Engine(string name)
{
        this->name = name;
    }
    
void print()
{
        cout<<"Engine: "<<name<<endl;
    }
};

 
class Brand 
{
    public:
    string type;
   
Brand(string type)
{
        this->type = type;
    }
    
    void print()
{
        cout<<"Brand: "<<type<<endl;
    }
};

 
class Car : public Engine, public Brand 
{
    int price;
    
public :
Car(string e, string b, int price) : Engine(e), Brand(b)
{
        this->price = price;
    }
    
    void print()
{
        Engine::print();
        Brand::print();
cout<<"Price: "<<price<<" euros.\n";
    }
};

 
int main()
{
Car c1("XV13","SKODA", 12000);

 
c1.print();

 
return 0;
}
