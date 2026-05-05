#include <iostream> 
using namespace std;

#include "Vehicle.h"


int main() {
	
	Vehicle vehicle1;
	string id;
	int attack,speed,defense,range;
	
	void setAll(string, int, int, int, int);
	void setId(string);
	void setSpeed(int);
	void setAttack(int);
	void setDefense(int);
	void setRange(int);
	string getId();
	int getSpeed();
	int getAttack();
	int getRange();
	int getDefense();
	void print();
		
	return 0;
}
