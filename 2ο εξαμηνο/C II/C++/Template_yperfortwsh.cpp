//yperfortwsh sunarthsewn , edw olous tous typous tous vazw ola mazi
//se mia sunarthsh.Auto legetai template,protupo.
#include <iostream>
#include <cstdlib>
using namespace std;
//template ,shmainei oti twra mporoume na exoume opoiodhpote eidos klp
//to class prepei na to grafoume gt leme oti mporei na einai kai object
//to variable einai oti exoume ftiaksei emeis twra
template <class variable>

variable maxOfTwo(variable x,variable y)
{
	if(x>y)
		return x;
	else
		return y;
}

int main()
{
	cout<<"To megalutero einai "<<maxOfTwo(1,2)<<"\n";
	cout<<"To megalutero einai "<<maxOfTwo(1.1,2.2)<<"\n";
	cout<<"To megalutero einai "<<maxOfTwo('z','a')<<"\n";
	
	return 0;
}
