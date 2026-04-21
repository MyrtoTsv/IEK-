#include <iostream> //input output stream.Anti gia library tha einai stream
#include <cstdlib> //xrhsimopoioume to library ths c , kai vasoume ena c mprosta

using namespace std;//Autos einai o kaluteros tropos
//Ama valw auta , mporw na svhnw ta std
//using std::cout;
//using std::cin;
//using std::string;
//using std::endl;

int main(){
	
	//printf
	//cout->console output.Prepei na to valw se kapoia consola.Vazw std giati auth einai to cmd
	int x;
	std::string name = "Harley <3";//gia na dhlwsoume string , std::string 
	
	//for(int i=0; i<10; i++) mporoume na dhlwnoume metavlhth mesa sthn for
	
	std::cout<<"Kalhmera\nDwse enan arithmo \n"; //tha mporousame na valoume anti gia \n , <<std::endl
	//scanf 
	//cin->console input
	std::cin>>x;
	//printf to x
	cout<<"To x exei timh "<< x <<" \n";
	cout<<"Name = "<< name <<"\n";
	
	system("PAUSE");
	return 0;
}
