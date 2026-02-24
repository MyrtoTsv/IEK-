//Tha xrhsimopoiei 5 noumera se pinaka kai na upologizei to megalutero
#include <stdio.h>
#include <stdlib.h>
#define ARRAY_SIZE 5
//const int ARRAY_SIZE 5;

float array[ARRAY_SIZE],max;
int i;
int main(){
	for(i=0; i<ARRAY_SIZE; i++){
		printf("Dwse to %do stoixeio tou pinaka: \n",i+1);
		scanf("%f",&array[i]);
	}
	//auth h logikh einai algorithmos
	max=array[0]; //to max tha einai iso me to prwto stoixeio tou pinaka
	
	for(i=0; i<ARRAY_SIZE; i++)
		if (array[i]>max)
			max=array[i];
		

	
	printf("------------------------------------\n");
	printf("O pinakas einai: \n");
	for(i=0; i<ARRAY_SIZE; i++){
		printf("To %do einai : %.2f\n",i+1,array[i]);
	}
	
	printf("to max einai: %.2f\n",max);
	
system("PAUSE");
return 0;
}
