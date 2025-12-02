#include <stdio.h>
#include <stdlib.h>

 int main(){
 	int year;
 	printf("Dwse etos ");
 	scanf("%d",&year);
 	if(year%4==0 && year%100!=0 || year%400==0)
 		printf("O xronos einai disektos");
	else
	    printf("O xronos den einai disektos");
	
	
   printf("\n");
   system("PAUSE >nul");
   return 0;
   
 }
