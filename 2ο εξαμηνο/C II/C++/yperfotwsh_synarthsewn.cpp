#include <iostream>
#include <cstdlib>

using namespace std;
//original form
int maxOfTwo(int x, int y)
{
	if(x>y)
		return x;
	else
		return y;
}

//version yperfortwshs , allazw to type gia na dinei diaforetiko apotelesma
double maxOfTwo(double x,double y)
{
	if(x>y)
		return x;
	else
		return y;
}

//version yperfortwshs , allazw to type gia na dinei diaforetiko apotelesma
char maxOfTwo(char x,char y)
{
	if(x>y)
		return x;
	else
		return y;
}

int main()
{
	//yperfortwsh einai otan theloume mia sunarthsh na pairnei orismata 
	//oxi mono gia int, na pairnei kai double , char, int klp
	cout<<"To megalutero einai "<<maxOfTwo(1,2)<<"\n";
	cout<<"To megalutero einai "<<maxOfTwo(1.1,2.2)<<"\n";
	cout<<"To megalutero einai "<<maxOfTwo('z','a')<<"\n";
	
	return 0;
}
