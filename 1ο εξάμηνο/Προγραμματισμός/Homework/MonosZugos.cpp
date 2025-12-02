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
  //printf(((int)num%2==0)?"O arithmos einai zugos":"O arithmos einai monos");
  //printf("%s",(int)number %2 ==0 ? "Einai zugos : "Einai monos:\n);

   printf("\n");
   system("PAUSE > nul");
   return 0;
 }



