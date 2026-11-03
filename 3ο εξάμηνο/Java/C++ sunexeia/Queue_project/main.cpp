#include "Queue.h"

int main()
{
	Queue q1; //Äçìéïõñãþ ìßá ïõñÜ (êáëåßôáé ï constructor)
	size_t number_of_enqueued_elements, number_of_dequeued_elements;
	char random_queue_element;	
	
	//ÅéóÜãù (enqueue) ôéìÝò ìÝóá óôçí ïõñÜ.
	cout<<"How many random elements do you want to ENQUEUE inside the queue? (Type a positive integer and press ENTER): "<<endl;
	cin>>number_of_enqueued_elements;
	
	cout<<endl<<endl;
	
	srand(time(NULL));//áñ÷éêïðïßçóç ôçò ðáñáãùãÞò ôõ÷áßùí áñéèìþí áêõñþíïíôáò ôçí øåõäïôõ÷áéüôçôá 
	                  //(ìüíï óå C/C++ åßíáé áðáñáßôçôï, áëëéþò ðáñÜãåé óõíå÷þò ôá ßäéá óôïé÷åßá)
	for(size_t i=0; i<number_of_enqueued_elements; i++)
	{
		//Το 33 ειναι γιατι , στο ASCII table ,οι χαρακτηρες πριν απο το 33 ειναι "σκουπιδια" , space backspace etc.
		//Οπότε έχουμε βαλει από το 33 και μετα που ειναι όντως χαρακτήρες
		//το 127-33 είναι για να μην παίρνει ελληνικούς χαρακτήρες
		random_queue_element = 33 + rand()%(127-33);  //Ïé åêôõðþóéìïé ëáôéíéêïß ASCII ÷áñáêôÞñåò åßíáé áðü ôï 33 þò ôï 127 ôïõ ðßíáêá ASCII
		q1.enqueue(random_queue_element);
	}
	
	//ÅîÜãù (dequeue) ôéìÝò áðü ôçí ïõñÜ.
	//s1.print();   //Ç åíôïëÞ áõôÞ ëåéôïõñãåß êáé åêôõðþíåé (åîÜãåé) ôüóá óôïé÷åßá, üóá åéóÞ÷èçóáí ìÝóá óôçí ïõñÜ.
				    //ÁëëÜ, áí êëçèåß ç print(), äå èá öáíåß ôï öáéíüìåíï ôçò åîáãùãÞò áðü Üäåéá ïõñÜ.
					//Ïðüôå åíáëëáêôéêÜ, êáëïýìå ôï ÷ñÞóôç íá åðéëÝîåé ôï ðëÞèïò ôùí óôïé÷åßùí ðïõ èá ãßíïõí dequeue.
	cout<<"\n\nHow many random elements do you want to DEQUEUE outside of the queue (F.I.F.O. mode of dequeueing)?"<<endl;
	cout<< "(Type a positive integer and press ENTER): "<<endl;
	cin>>number_of_dequeued_elements;
	
	cout << "----------------------------------------" << endl;
	for(size_t i=0; i<number_of_dequeued_elements; i++)
		cout<<q1.dequeue()<<( q1.getDequeueValue() < q1.getEnqueueValue()-1 ? "'\n" : "\n");
	
	system("PAUSE > nul");
	return 0;
}
