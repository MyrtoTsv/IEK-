#include <iostream>
#include <cstdlib>

using namespace std;

//Function Declarations
char displayMenu();
void integerOperations();
void realOperations();
//----------------------------------------------------------------------------------------------
char displayMenu(){
	
	char choice = 0;
	cout<<"Welcome to Calculator\n";
	cout<<"----------------------\n";
	cout<<"\n";
	cout<<"\n";
	cout<<"\n";
	cout<<"1.Thes na kaneis praksh metaksu 2 akeraiwn?\n";
	cout<<"2.Thes na kaneis praksh metaksu 2 pragmatikwn?\n";
	cout<<"3.Thes na kaneis pragmatopoihthei eksodos tou programmatos?\n";
    cin>>choice;
    
    return choice;
}

void integerOperations(){
	
	bool flag = true;
	char praksh;
	int Total=0,x=0,y=0;
	
	cout<<"1.Epilogh me akeraious\n";
    cout<<"Dwse mou ton prwto arithmo:\n";
    cin>>x;
    cout<<"Dwse mou ton deutero arithmo: \n";
    cin>>y;
	cout<<"Epelekse poia praksh thes: \n";
	cin>>praksh;
	
	switch(praksh)
	{
		case '+':
	    	{
				flag = 1;
				Total = (x + y);
			 	break;
        	}
		case '-':
		   {
			
				flag = 1;
				Total = (x - y);
				break;
           }
		case '*':
		    {
				flag = 1;
				Total = (x * y);
				break;
		    }
		case '/':
			{
				if(y==0){ //An o paronomasths ginei 0 pou den epitrepetai
				
					flag = 0;
					cout<<"Den orizetai diairesh me to mhden!!Parakalw prospathiste ksana\n";
					break;
				}else{
				    flag = 1;
					Total = (x / y);
				    break;
	         	}
	     	}
	    default:
	    	{
	    		flag=0;
	    		cout<<"Kanate lathos praksh.Parakalw prospathiste ksana\n";
			}
   }
    if (flag==1)
     	cout<<"To apotelesma einai " << Total <<"\n";
}

void realOperations(){
	
	bool flag = true;
	char praksh;
	float Total=0,x=0,y=0;
	
	cout<<"2.Epilogh me pragmatikous\n";
    cout<<"Dwse mou ton prwto arithmo:\n";
    cin>>x;
    cout<<"Dwse mou ton deutero arithmo: \n";
    cin>>y;
	cout<<"Epelekse poia praksh thes: \n";
	cin>>praksh;
	
	switch(praksh)
	{
		case '+':
	    	{
				flag = 1;
				Total = (x + y);
			 	break;
        	}
		case '-':
		   {
			
				flag = 1;
				Total = (x - y);
				break;
           }
		case '*':
		    {
				flag = 1;
				Total = (x * y);
				break;
		    }
		case '/':
			{
				if(y==0){ //An o paronomasths ginei 0 pou den epitrepetai
				
					flag = 0;
					cout<<"Den orizetai diairesh me to mhden!!Parakalw prospathiste ksana\n";
					break;
				}else{
				    flag = 1;
					Total = (x / y);
				    break;
	         	}
	     	}
	    default:
	    	{
	    		flag=0;
	    		cout<<"Kanate lathos praksh.Parakalw prospathiste ksana\n";
			}
   }
    if (flag==1)
     	cout<<"To apotelesma einai " << Total<<"\n";
}

int main(){
	
	int flag=1;
	char epilogh = 'a';
	
	do{
		epilogh=displayMenu();
		
		switch(epilogh)
		{
			case '1':
				{
					flag = 1;
					integerOperations();
					break;
				}
			case '2':
				{
					flag = 1;
					realOperations();
					break;
				}
			case '3':
				{
					flag = 0;
					break;
				}
			default:
				{
					flag = 1;
					cout<<"Lathos epilogi!!!Prospathise ksana!\n";

				}
				
		}
	}while(flag==1);

    			
return 0;
}
