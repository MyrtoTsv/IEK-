//O Xrhsths tha dieni disdiastatous 2x3,Prospathesh disidastwn pinakwn , kai ftiaxnoume enan kainourio 2x3 , ektupwsh kai twn 3
#include <stdio.h>
#include <stdlib.h>

#define ROWS 2
#define COLUMNS 3
int main(){
	
	float A[ROWS][COLUMNS],B[ROWS][COLUMNS],C[ROWS][COLUMNS];
	size_t i,j;
    //size_t Einai unsigned tetraplasiou megethous
    
    //data input A
	for(i=0; i<ROWS; i++){
		for(j=0; j<COLUMNS; j++){
			printf("Dwse to stoixeio A[%d][%d]:  ", i,j);
			scanf("%f",&A[i][j]);
		}
	}
	
	 //data input B
	for(i=0; i<ROWS; i++){
		for(j=0; j<COLUMNS; j++){
			printf("Dwse to stoixeio B[%d][%d]:  ", i,j);
			scanf("%f",&B[i][j]);
		}
	}
	
	//prosthesh pinakwn , dhmiourgia C
	for(i=0; i<ROWS; i++){
		for(j=0; j<COLUMNS; j++){
			C[i][j] = A[i][j] + B[i][j];
	    }
   }   
   
   
   	system("CLS"); //Clears terminal 

   
   //Ektupwsh A,B,C
   //A
   	printf("PINAKAS A[%d][%d]\n----------------------------------\n",ROWS,COLUMNS);
	for(i=0; i<ROWS; i++){
		for(j=0; j<COLUMNS; j++)
			printf("%.2f\t",A[i][j]);
	    
	  printf("\n"); //gia na emfanizei kathe row sthn seira
	  
	}
	
	//B
   	printf("PINAKAS B[%d][%d]\n----------------------------------\n",ROWS,COLUMNS);
	for(i=0; i<ROWS; i++){
		for(j=0; j<COLUMNS; j++)
			printf("%.2f\t",B[i][j]);
	    
	  printf("\n"); //gia na emfanizei kathe row sthn seira
	  
	}
	
	//C
   	printf("PINAKAS C[%d][%d]\n----------------------------------\n",ROWS,COLUMNS);
	for(i=0; i<ROWS; i++){
		for(j=0; j<COLUMNS; j++)
			printf("%.2f\t",C[i][j]);
	    
	  printf("\n"); //gia na emfanizei kathe row sthn seira
	  
	}
	
	
	system("PAUSE");
	return 0;
}
