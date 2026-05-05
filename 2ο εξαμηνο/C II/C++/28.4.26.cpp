#include <iostream>
#include <cstdlib>
using namespace std;
 

class BankAccount
{
	private:
		float balance;
		string IBAN;
		 
		
	public:
		void setAll(float money, string message)
		{
			setBalance(money);
			setIBAN(message);
		}
		
		void setBalance(float money)
		{
			if(money>=0)
			balance = balance + money;
		}
		 
		
		void setIBAN(string message)
		{
			if(message != " ")
			IBAN = message;
		}
		 
		
		float getBalance()
		{
			return balance;
		}
		 
		
		string getIBAN()
		{
			return IBAN;
		}
		 
		
		void print()
		{
		cout<<"Ο λογαριασμός σου έχει "<<getBalance()
    		<<"€ και IBAN "<<getIBAN()<<".\n";
		}
};
		 
		
int main()
{
	system("CHCP 1253 > nul");
	
	BankAccount pireos;
		 
		
	//pireos.setBalance(-20);
	//pireos.setIBAN("GR1234567890");
	
	pireos.setAll(20, "GR1234567890");
	pireos.print();
		 
		
	system("PAUSE");
	return 0;
}
