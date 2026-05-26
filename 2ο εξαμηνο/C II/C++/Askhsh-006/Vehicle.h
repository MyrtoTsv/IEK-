#ifndef
	#define VEHICLE_H
	
	#include <iostream>
	#include <string>

	using namespace std;
	
	class Vehicle
	{
		private:
			string id;
			int speed,attack,defence;
			static int count;
		
			
		public:
			Vehicle(string,int,int,int);
			~Vehicle();
			void setAll(string,int,int,int);
			void setId(string);
			void setSpeed(int);
			void setAttack(int);
			void setDefence(int);
			static int getCount() const;
			string getId() const;
			int getSpeed() const;
			int getAttack() const;
			int getDefence() const;
			void print() const;
	};
#endif
