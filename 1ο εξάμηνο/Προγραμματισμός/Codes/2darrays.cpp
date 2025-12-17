#include <stdio.h>
#include <stdlib.h>

#define SIZE_I 2
#define SIZE_J 3

int main(){
	float array2d[SIZE_I][SIZE_J];
	size_t i,j;
    //size_t Einai unsigned tetraplasiou megethous
    
    //data input
	for(i=0; i<SIZE_I; i++){
		for(j=0; j<SIZE_J; j++){
			printf("Dwse to stoixeio array2d[%d][%d]:  ", i,j);
			scanf("%f",&array2d[i][j]);
		}
	}
	
	system("CLS");
	
	//data output
	printf("PINAKAS array2d[%d][%d]\n----------------------------------\n",SIZE_I,SIZE_J);
	for(i=0; i<SIZE_I; i++){
		for(j=0; j<SIZE_J; j++)
			printf("%.2f\t",array2d[i][j]);
	    
	  printf("\n"); //gia na emfanizei kathe row sthn seira
	  
	}

 system("PAUSE");
 return 0;
}

//H logikh einai , meta apo kathe row gia thn ektupwsh (i kai to vazoume me \t) na vazoume \n gia na fainetai disdiastatos
