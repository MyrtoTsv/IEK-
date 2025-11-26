#include <stdio.h>
#include <stdlib.h>

 int main (){
   float num;
 	
   printf("Dwse mou enan akeraio\n");
   scanf("%f",&num);
 	
   if (num!=(int)num)
     printf("Den einai akeraios\n");
   else 
     if ((int)num%2==0)
       printf("O arithmos einai zugos");
     else if ((int)num%2!=0)
       printf("O arithmos einai monos");

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

