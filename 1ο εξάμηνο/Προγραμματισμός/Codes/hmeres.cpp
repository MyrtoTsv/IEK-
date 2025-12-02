#include <stdio.h>
#include <stdlib.h>

 int main (){
 	
 	system("CHCP 1253 > nul"); //Gia ta Ellhnika
 	
 	int mera;
 	
    printf("Dwse mou ena noumero\n");
    scanf("%d",&mera);
    
    switch (mera){
	
      case 1:
    	printf("H mera einai Kuriakh\n");
    	break; //gia na mhn vgazei ola ta cases apo ton arithmo kai meta
      case 2:
        printf("H mera einai Deutera\n");
        break;
      case 3:
        printf("H mera einai Trith\n");
        break;
      case 4:
        printf("H mera einai Tetarth\n");
        break;
      case 5:
        printf("H mera einai Pempth\n");
        break;
      case 6:
        printf("H mera einai Paraskeuh\n");
        break;
      case 7:
        printf("H mera einai Savvato\n\a");
        break;
      default: //else
        printf("Einai lathos, dwse mou enan allon arithmo\n");
   } // end of switch statement
    
 	printf("\n");
 	system("PAUSE > nul");
 	return 0;
 }
