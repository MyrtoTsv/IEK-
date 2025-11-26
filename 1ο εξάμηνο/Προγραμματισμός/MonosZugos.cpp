#include <stdio.h>
#include <stdlib.h>

 int main (){
   float num;
 	
   printf("Dwse mou enan akeraio\n");
   scanf("%f",&num);
 	
   if (num!=(int)num)
     printf("Den einai akeraios\n");
   else 
     if ((int)num%2==0)
       printf("O arithmos einai zugos");
     else if ((int)num%2!=0)
       printf("O arithmos einai monos");

   printf("\n");
   system("PAUSE > nul");
   return 0;
 }

