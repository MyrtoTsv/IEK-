//Na graftei programma se glwssa C to opoio tha zhtaei apo ton xrhsthana plhktrologhsei times se ena pinaka
//10 akeraiwn kai na uplogizei kai na ektypwnei ton megisto,ton elaxisto kai ton meso oro tous.
#include <stdio.h>
#include <stdlib.h>
#define SIZE 10
int main(){
	
	int array[SIZE],i,max,min,sum=0;
	float avg;
  
    for(i=0; i<SIZE; i++)
    	{
		printf("Dwse ta stoixeia tou pinaka 10 akeraiwn \n",i+1);
		scanf("%d",&array[i]);
    	}
    	
    	min=max=array[0];
    	
    for(i=0; i<SIZE; i++)
	{
	 
    	if (array[i]>max)
    	
         	max=array[i];
	    
	    
		if(array[i]<min)
		
			min=array[i];
		
	  sum+=array[i];
	
	 }	
	 
	avg=(float)sum/SIZE;
  
	
	printf("O PINAKAS [%d]\n-------------------------------\n",SIZE);
	for(i=0; i<SIZE; i++){
		printf("%d\t",array[i]);
	}
	printf("\n");
    printf("To megisto einai %d\n",max);
    printf("To elaxisto einai %d\n",min);
    printf("To avg einai %.f\n",avg);
	system("PAUSE");
	return 0;
}
