#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	
	
	system("CHCP 1253 > nul");
	
	int die1,die2;
	
	srand(time(0));//thn srand() thn grafoume mono mia fora . Apagoreuetai
	die1 = 1 + rand()%6;//για να ειναι μεχρι 6 που ειναι το ζαρι
	
	printf("To 1o ζάρι έφερε %d.\n",die1);
	
	die2= 1 + rand()%6;//για να ειναι μεχρι 6 που ειναι το ζαρι
	
	printf("To 2ο ζάρι έφερε %d.\n",die2);
	
return 0;
}

