#include <cstdlib>
#include <ctime>
using namespace std;

#include "GroundSquare.h"
#include "Vehicle.h"

GroundSquare movement(GroundSquare start, Vehicle veh)
{
	GroundSquare new_obj;
	
	srand(time(NULL));
	unsigned random = rand()%4;
	
	switch(random)
	{
		case 0: {
					new_obj.setXCoord(start.getXCoord());
			 		new_obj.setYCoord(veh.getSpeed() + start.getYCoord());
		        	break;
		        }
			
		case 1: {
					new_obj.setXCoord(0.5*veh.getSpeed() + start.getXCoord());
			 		new_obj.setYCoord(0.5*veh.getSpeed() + start.getYCoord());
		        	break;
	 			}
			
		case 2: {
					new_obj.setXCoord(veh.getSpeed() + start.getXCoord());
			 		new_obj.setYCoord(start.getYCoord());
		        	break;

		        }
		
		case 3: {
					new_obj.setXCoord(0.5*veh.getSpeed() + start.getXCoord());
			 		new_obj.setYCoord((-0.5)*veh.getSpeed() + start.getYCoord());
		        	break;

		        }
		
			//default: {break; } den xreiazetai giati den tha mpei pote se allo case apo thn 0-3 giati etsi exoume valei thn random
	}
	
	return new_obj;
}

int main(){
	
	GroundSquare s1,s2;
	
	cout<<"Constructing OBJECT GroundSquare1\n";
	cout<<"----------------------------------\n";
	s1.print();
	cout<<"\n";
	
	cout<<"Constructing OBJECT GroundSquare2\n";
	cout<<"----------------------------------\n";
	s2.print();
	cout<<"\n";
	
	s1.setAll("COACH1", 1 , 1000);
	
	s1.incrementXCoordBy(2500); //den tha auksithei
	
	s2.setAll("COACH2", 1001 , 2);
	
	s2.incrementYCoordBy(500); //den tha auksithei
	
	cout<<"New value for OBJECT GroundSquare1\n";
	cout<<"----------------------------------\n";
	s1.print();
	cout<<"\n";
	
	cout<<"New value for OBJECT GroundSquare2\n";
	cout<<"----------------------------------\n";
	s2.print();
	cout<<"\n";
	
	Vehicle v("Recon" , 44 , 7, 9, 6);
	cout<<"Constructing OBJECT Vehicle\n";
	cout<<"---------------------------\n";
	v.print();
	cout<<"\n";
	
	s2 = movement(s1,v);
	
	cout<<"Combinational OBJECT\n";
	cout<<"--------------------\n";
	s2.print();
	cout<<"\n";
	
	system("PAUSE");

	return 0;
}
