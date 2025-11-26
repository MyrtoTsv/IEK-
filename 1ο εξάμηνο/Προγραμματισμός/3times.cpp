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

//allos tropos
#include <stdio.h>
#include <stdlib.h>

 int main (){
 	
 	int x,y,z,max,min;
  float avg;
 	
 	printf("Dwse mou treis arithmous\n");
 	scanf("%d %d %d",&x,&y,&z);
 	//a)
 	max = x;

  //max = (x>=y) ? x : y;
  //max = (z>=max) ? z : max;
  //max = (x>=y) ? (x>=z ? x : z) : (y>=z ? z);
 	if (y>=max)
 	   max = y;
 	if (z>=max)
 	   max = z;
 	//b)
 	min = x;
 	
 	if (y<=min)
 	  min = y;
 	if (z<=min)
 	  min = z;
 	  
 	//c)
 	avg=(x+y+z)/3.0;
 	printf("O megistos einai %d.\n",max);
 	printf("O elaxistos einai %d.\n"min);
 	printf("O mesos oros einai %f.\n",avg);
 	
 	printf("\n");
 	system("PAUSE > nul");
 	return 0;
 }

