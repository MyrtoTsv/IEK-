//Na grafei programma se glwssa C to opoio na zhtaei apo ton xrhsth na dwsei times se 2 float pinakes
//10 stoixeiwn o kathenas kai na dhmiourgei 3o pinaka float 10 thesewn kathe stoixeio tou opoiou 
//na prokuptei apo to athroisma twn antistoixwn twn 2 prohgoumenwn pinnakwn
#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

int main(){
	float A[SIZE],B[SIZE],C[SIZE];
	unsigned int i;
	
	for(i=0; i<SIZE; i++)
	{
		printf("Dwse ta stoixeia tou prwtou pinaka\n");
		scanf("%f",&A[i]);
	}
	
	printf("------------------------------------\n");
	
	for(i=0; i<SIZE; i++)
	{
		printf("Dwse ta stoixeia tou deuterou pinaka\n");
		scanf("%f",&B[i]);
	}
	
	
	for(i=0; i<SIZE; i++)
	{
		C[i] = A[i] + B[i];
	}
	
	for(i=0; i<SIZE; i++)
	{
		printf("%.1f\t",C[i]);
	}
	
	printf("\n");
	system("PAUSE");
	return 0;
}
