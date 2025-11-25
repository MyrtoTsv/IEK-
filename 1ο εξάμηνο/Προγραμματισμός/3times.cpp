#include <stdio.h>
#include <stdlib.h>

 int main (){
 	float timh1,timh2,timh3,MO;
 	printf("Dwse mou treis times\n");
 	scanf("%f%f%f",&timh1,&timh2,&timh3);
 	
 	//a)To megalutero
 	if(timh1>timh2 && timh1>timh3)
 	    printf("a)To megalutero einai h timh :%f\n",timh1);
 	else if(timh2>timh1 && timh2>timh3)
 	    printf("a)To megalutero einai h timh :%f\n",timh2);
 	else 
 	    printf("a)To megalutero einai h timh :%f\n",timh3);
 	
 	//b)To mikrotero
 	if(timh1<timh2 && timh1<timh3)
 	    printf("b)To mikrotero einai h timh :%f\n",timh1);
 	else if(timh2<timh1 && timh2<timh3)
 	    printf("b)To mikrotero einai h timh :%f\n",timh2);
 	else 
 	    printf("b)To mikrotero einai h timh :%f\n",timh3);
 	
 	//c)Ton M.O.
 	MO=(timh1+timh2+timh3)/3; //mo=athroisma/plithos
 	printf("c)O mesos oros einai : %f\n",MO);
 	
 	printf("\n");
 	system("PAUSE > nul");
 	return 0;
 }
