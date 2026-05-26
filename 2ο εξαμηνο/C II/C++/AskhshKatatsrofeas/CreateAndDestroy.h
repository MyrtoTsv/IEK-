#ifndef CREATEANDDESTROY_H
	#define CREATEANDDESTROY_H
	
	#include <iostream> //gia to system("...")
	#include <cstdlib> //gia to clock_t
	#include <ctime> //gia to getch();
	#include <conio.h>
	using namespace std;
	
	class CreateAndDestroy
	{
		private:
			int objectID; //tha einai san counter
			string message;
			clock_t start, end; //to start katagrafei thn wra pou gennithike ena antikeimeno
			//to end katagrafei thn wra pou katastrafhke ena antikeimeno
	        //to clock_t einai ena antikeimeno pou mporei na metraei ton xrono enos antikeimenou
	        
	    public:
	    	CreateAndDestroy(int, string); //custom constructor
	    	~CreateAndDestroy(); //destructor
	    	//Kanones destructor:1.Prepei na exei to idio onoma me thn klash ,alla vazoume "~"
	    					   //2.Den xreiazetai eisodous , giati apla skotwnei apo thn RAM ena antikeimeno.(Einai panta void)					 
	};
	//#include "CreateAndDestroy.cpp"
	//when no Project exists, must be used
#endif
	
	
