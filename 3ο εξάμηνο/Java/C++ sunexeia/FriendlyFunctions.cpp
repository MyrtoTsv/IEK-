#include <iostream>
#include <cstdlib.h>

using namespace std;

//Friendly functions

class Count
{
	//h setX den einai meros ths klashs , einai eksw apo to public.Den einai meros ths klashs.Einai filos
	//h setX den einai methodos , einai sunarthsh.Thn xrhsimopoioume otan theloume na peiraksoume tautoxrona apo duo kai panw antikeimena apo duo kai panw diaforetikwn klasewn.
	friend void setX(Count &, int);
	
	public:
		Count()
		{
			x = 0;
		}
		void print()
		{
			cout<<x<<endl;
		}
		
	private:
		int x;
};


int main (void)
{
	Count c1;
	
	cout<<"counter.x = ";
	c1.print();
	
	c1.setX(c1, 8);
	
	cout<<"counter.x = ";
	c1.print();
	
	system("PAUSE");
	return 0;
}

void setX(Count &count_obj, int value)
{
	count_obj.x = value;
}
