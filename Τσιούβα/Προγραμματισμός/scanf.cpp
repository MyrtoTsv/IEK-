#include <stdio.h>
#include <stdlib.h>

int main(){
	system("CHCP 1253 > nul");
   
   unsigned short int tripshfios;
   int new1 , new2 , new3 , rev;
   float sum;
 	printf("Δώσε μου εναν θετικο τριψηφιο αριθμο \n");
 	scanf("%d",&tripshfios); 
 	 //a
   new1=tripshfios/100;
   new2=tripshfios/10;
   new2=new2%10;
   new3=tripshfios%10;
  
   printf("%d% \n",new1+new2+new3);
   
   //b
   new3=tripshfios%10;
   printf("%d \n",new3);
	system ("PAUSE");
	return 0;
}

