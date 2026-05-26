#include "CreateAndDestroy.h"

//custom constructor
CreateAndDestroy::CreateAndDestroy(int ID, string msg)
{
	start = clock(); //h methodos clock(),arxizei kai metraei milisecond ths klashs
	objectID = ID;
	message = msg;
	cout<<"Object "<<objectID<<
	      " was created as "<<message<<endl<<endl;
}

//destructor
CreateAndDestroy::~CreateAndDestroy()
{
	cout<<"Press any key to pass some time...\n";
	getch();//anavosvhnei ton dromea mexri na pathsei ena opoidhpote koumpi
	end = clock();//pare pali thn methodo clock() na lavei pote teramtistike h zwh tou antikeimenou
	cout<<"Object "<<objectID<<"("<<message
	<<") was destroyed and lived for "
	<< (end-start)/(CLOCKS_PER_SEC/1000)<<" milliseconds.\n";
	system("PAUSE"); // h enallaktika getch();	    
}
