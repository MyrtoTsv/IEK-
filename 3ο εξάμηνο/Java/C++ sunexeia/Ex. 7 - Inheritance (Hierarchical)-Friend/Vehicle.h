#ifndef VEHICLE_H
	#define VEHICLE_H
	
	#include <iostream>
	#include <string>
	using namespace std;
	
	class Vehicle
	{
		//To protected anti gia private , shmainei oti mono oi klaseis pou klhronomoun apo thn klash exoun access se auta ta paidia
		//Kai me to private kai me to protected , douleuei h klhronomhkothta.
		//Protected giati ama thelw na exw access sta attributes tou goniou , alliws me private den ginetai.
		
		//attributes
		protected:
			string id;
			int speed, attack, defense;
			static int count;
		
		//methods
		public:
			//custom constructor
			Vehicle(string = "\0", int = 50, int = 40, int = 30);
			~Vehicle();
			//setters
			void setAll(string, int, int, int);
			void setId(string);
			void setSpeed(int);
			void setAttack(int);
			void setDefense(int);
			//getters
			static int getCount();
			string getId() const;
			int getSpeed() const;
			int getAttack() const;
			int getDefense() const;
			//print method
			void print() const;
	};
#endif
