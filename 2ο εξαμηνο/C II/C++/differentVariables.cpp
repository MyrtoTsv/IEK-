#include <iostream>
using namespace std;
//global metavlhth
//Katholikhs emveleias , thn vlepoun oloi
int x = 1; //To auto edw de doulevei
		   //Xreiazetai agkristra to auto gia na kathoristei to scope tou

void useLocal()
{
	int x = 25;
	cout<<x<<endl;
	++x;
	cout<<x<<endl;
}

void useAuto()
{
	//to auto shmainei den kserw ti eidos metavlhth einai auth
	//to katalavainei apo thn timh pou tou vazw
	//einai enas pio grhgoros tropos na dhlwnw metavlhtes
	auto x = 35;
	cout<<x<<endl;
	++x;
	cout<<x<<endl;
}

void useRegister()
{
	//to register einai ousiastika na mpei oxi sthn Ram ,alla phgaine sthn mnhmh
	//tou epeksergasth.An einai gematos , kai hlevel 1,level 2 kai level 3 tha paei
	//sthn Ram.Mporoume na to vazoume , alla sxedon kathe fora tha einai axrhsto
	//giati tha einai gematos o epeksergasths.
	register int x = 45;
	cout<<x<<endl;
	++x;
	cout<<x<<endl;
}

void useStatic()
{
	//static , leei oti auth h metavlhth na mhn thn skotwseis , na thn thumasai
	//kai na teleiwsei h sunarthsh , esy na thn thumasai
	//dhladh , na thumasai thn 51.An thn ksanakalesw, tha ginei 52.
	static int x = 50;
	cout<<x<<endl;
	++x;
	cout<<x<<endl;
}

void useGlobal()
{	//to x pou pairnei , einai to x panw panw ,to global.
	//h global pleon exei ginei 10.ara otan tha ksanakalestei , tha einai 10.
	  cout<<x<<endl;
	  x *=10;
	  cout<<x<<endl;
}

int main()
{
	int x = 5;
	
	cout<<x<<endl;
	
	if(true)
	{
		int x = 7;
		cout<<x<<endl;
	}
	
	cout<<x<<endl;
	
	useLocal();
	useAuto();
	useRegister();
	useStatic();
	useGlobal();
	
	useLocal();
	useAuto();
	useRegister();
	useStatic();
	useGlobal();
	
	cout<<x<<endl;
	cout<<::x<<endl;//ektupwnei to global , epeidh vazoume ::x
	
	system("PAUSE");
	return 0;
}
