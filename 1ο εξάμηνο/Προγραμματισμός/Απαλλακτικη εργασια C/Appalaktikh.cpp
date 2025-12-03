#include <stdio.h>
#include <stdlib.h>

int main (){
    /*Declarations,Arxikopoihseis*/
	int choice;
	
	/*Vasiko menu*/
	printf("VASIKO MENOU\n");
	printf("1.EMFANISH OLWN\n");
	printf("2.EISAGWGH NEAS EGGRAFHS\n");
	printf("3.DIAGRAFH EGGRAFHS\n");
	printf("4.ANANEWSH EGGRAFHS\n");
	printf("5.ANAZHTHSH\n");
	printf("6.ENHMERWSH VASHS\n");
	printf("0.EKSODOS\n");
	
	/*Epilogh tou Xrhsth*/
	scanf(" %d",&choice);
	
	switch(choice){

		case 1:
			printf("Eisai sto 1\n");
			break;
		case 2:
			printf("Eisai sto 2\n");
			break;
		case 3:
			printf("Eisai sto 3\n");
			break;
		case 4:
			printf("Eisai sto 4\n");
			break;
		case 5:
			printf("Eisai sto 5\n");
			printf("MENOU ANAZHTHSHS\n");
			printf("1.ME VASH TON ARITHMO\n");
			printf("2.ME VASH TO XRWMA\n");
			printf("3.ME VASH TON KATASKEUASTH\n");
			printf("4.ME VASH THN HMEROMHNIA KATASKEUHS\n");
			printf("0.EPISTROFH STO VASIKO MENOU\n");
			break;
		case 6:
			printf("Eisai sto 6\n");
			break;
		case 0:
			printf("Eisai sto 0\n");
			break;
		default:
		   printf("Eisai lathos\n");
	       break;
	}
			
	
  printf("\n");
  system("PAUSE > nul");
  return 0;
}

