//Tha xrhsimopoiei 5 noumera se pinaka kai na upologizei to megalutero,alla tuxaious arithmous.Me sunartseis.
#include <stdio.h>
#include <stdlib.h>
#include <time.h> //xwris auto ta dedomena den tha einai tuxaia.Auto einai gia thn rand

#define ARRAY_SIZE 5
//const int ARRAY_SIZE 5;

//Sunarthsh gia ektupwsh pinaka
void printArray(float array_i[],const int size){
	
    int i;
    
    printf("PINAKAS %d stoxeiwn\n",size);
    printf("---------------------------\n",size);
    for(i=0; i<size; i++)
       printf("%.1f\t",array_i[i]);
}

//Sunarthsh gia euresh max
float maxOfArray(float array_i[],const int size){
	
	 float temp_max=array_i[0];
	 int i;
	 
		for(i=0; i<size; i++)
	    	if (array_i[i]>temp_max)
		    	temp_max=array_i[i];
	
	return temp_max;
}


srand(time(NULL));//etsi ta noumera den tha einai epanalamvanomena.Xwris autpo tha mou vgazei to idio noumero.

int main(){
	for(i=0; i<ARRAY_SIZE; i++){
		array[i]= 1 + rand()%100; // Oti upologisei h random , vres to upoloipo ths diairesh me to 100,kai tha einai apo 0-99.
		//Vazoume to 1+ giati den theloume to 0,theloume apo 1-99
	}
	
    max=maxOfArray(array[],ARRAY_SIZE)

	printArray(array[],ARRAY_SIZE);
	
	printf("to max einai: %.2f\n",max);
	
system("PAUSE");
return 0;
}
