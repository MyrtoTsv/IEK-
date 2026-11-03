//Hybrid inheritance is a combination of more than one type of 4 previous types of inheritance.
#include <iostream>
using namespace std;

 
class Grandfather 
{
private:
string surname;
    
public:
Grandfather(string surname)
{
this->surname = surname;
}

 
void print()
{
cout <<"To eponimo tou, pou to pire apo ton pappou tou, einai: "<<surname<<endl;
}  
};

 
class Father : public Grandfather  
{
private:
string name;

 
public:
Father(string surn, string name) : Grandfather(surn)
{
   this->name = name;
}
    
    void print()
{
        Grandfather::print();
        cout <<"To patronimo tou, pou to pire apo ton patera tou, einai: "<<name<<"\t";
    } 
};

 
class StudentTEP
{
    private:
    string pvts;
    
public:
    StudentTEP(string iek)
{
        pvts = iek;
    }
    
void print()
{
cout <<" spoudazei sto IEK: "<<pvts<<endl;
}
};

 
class Son : public Father, public StudentTEP 
{
private:
int age;
string name;

 
public:
    Son(string surn, string n, string iek, string name, int age) : Father(surn, n), StudentTEP(iek)
{
        this->name = name;
        this->age = age;
    }
    
    void print()
{
        cout <<"O "<<name;
        cout <<" me ilikia " <<age;
        StudentTEP::print();
        Father::print();  
    }
};

 
int main()
{
    Son s1("Pappas", "Ioannis", "IEK_2022", "Nikos", 20);
    
s1.print();
   
    return 0;
}
