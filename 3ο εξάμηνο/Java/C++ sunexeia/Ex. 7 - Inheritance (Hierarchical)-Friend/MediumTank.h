#ifndef MEDIUMTANK_H
	#define MEDIUMTANK_H
	
	#include "Vehicle.h"
	//Proxy class , einai auth pou ousiastika pou thn vazoume gia na kserei mia klash apla oti uparxei h allh xwris na exei access sto header ths.
	//Den vazoume olo to header , giati den theloume ontws olo to header ton kwdika edw, mono apla na anagnwristei sto declaration ths friendly function
	//kai epeidh den theloume na klhronomhsei to ena paidi to allo , den xreiazetai na kserei to ena ton kwdika tou allou.
	class HeavyTank; // to exoume valei edw gia na to anagnwrisei h friendly function
	
	class MediumTank : public Vehicle //::Vehicle giati klhronomei
	{
		//friendly function declaration.
		//exoume valei call by refenece &, giati theloume na xalasoume to antikeimeno , ara me thn dieuthunsh
		//Ama den thn valoume , meta otan vgei apo thn sunarthsh einai san na exei meinei idio
		friend void resolveBattle(MediumTank &, HeavyTank &);
	
		//attirbutes
		private:
			int health;
			bool operational;
			static int count;
		
		//methods
		public:
			//custom constructor
			MediumTank(string = "Medium Tank",
			           int = 100, int = 120, int = 100,
					   int = 1000, bool = true);
			//destructor
			~MediumTank();
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
