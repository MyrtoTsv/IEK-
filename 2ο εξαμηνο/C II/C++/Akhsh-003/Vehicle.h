#ifndef VEHICLE_H
	#define VEHICLE_H
	#include <iostream>
	#include <string>
		class Vehicle()
		{
			private:
				string id;
				int speed,attack,defense,range;
			
			public:
				//custom constructor
				Vehicle(string,int,int,int,int);
				void setAll(string, int, int, int, int);
				void setId(string);
				void setSpeed(int);
				void setAttack(int);
				void setDefense(int);
				void setRange(int);
				string getId() const;
				int getSpeed() const;
				int getAttack() const;
				int getRange() const;
				int getDefense() const;
				void print();
		};
#endif
