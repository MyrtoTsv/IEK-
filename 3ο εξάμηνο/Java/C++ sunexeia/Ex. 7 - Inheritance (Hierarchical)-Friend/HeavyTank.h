#ifndef HEAVYTANK_H
	#define HEAVYTANK_H
	
	#include "Vehicle.h"
	//Proxy class , einai auth pou ousiastika pou thn vazoume gia na kserei mia klash apla oti uparxei h allh xwris na exei access sto header ths.
	//Den vazoume olo to header , giati den theloume ontws olo to header ton kwdika edw, mono apla na anagnwristei sto declaration ths friendly function
	//kai epeidh den theloume na klhronomhsei to ena paidi to allo , den xreiazetai na kserei to ena ton kwdika tou allou.
	class MediumTank;// to exoume valei edw gia na to anagnwrisei h friendly function
	
	class HeavyTank : public Vehicle //::Vehicle giati klhronomei
	{
		//friendly function declaration.
		//exoume valei call by refenece &, giati theloume na xalasoume to antikeimeno , ara me thn dieuthunsh
		//Ama den thn valoume , meta otan vgei apo thn sunarthsh einai san na exei meinei idio
		friend void resolveBattle(MediumTank &, HeavyTank &);
	
		//attributes
		private:
			int health;
			bool operational;
			static int count;	
		
		//methods
		public:
			//custom constructor
			HeavyTank(string = "Heavy Tank", 
			          int = 75, int = 150, int = 125,
					  int = 1500, bool = true);
			//destructor
			~HeavyTank();
			//setters & getters
			static int getCount();
			void setHealth(int);
			void setOperational(bool);
			int getHealth() const;
			string getOperational() const;
			//print method
			void print() const;
	};
#endif
