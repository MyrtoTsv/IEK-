//Tha xrhsimopoiei 5 noumera se pinaka kai na upologizei to megalutero,alla tuxaious arithmous
#include <stdio.h>
#include <stdlib.h>
#include <time.h> //xwris auto ta dedomena den tha einai tuxaia.Auto einai gia thn rand

#define ARRAY_SIZE 5
//const int ARRAY_SIZE 5;

float array[ARRAY_SIZE],max;
int i;

srand(time(NULL));//etsi ta noumera den tha einai epanalamvanomena.Xwris autpo tha mou vgazei to idio noumero.
int main(){
	for(i=0; i<ARRAY_SIZE; i++){
		array[i]= 1 + rand()%100; // Oti upologisei h random , vres to upoloipo ths diairesh me to 100,kai tha einai apo 0-99.
		//Vazoume to 1+ giati den theloume to 0,theloume apo 1-99
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
