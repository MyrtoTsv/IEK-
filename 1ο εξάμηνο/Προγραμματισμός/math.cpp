#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	
	
	system("CHCP 1253 > nul");
	
   float power = pow(3,2);
   float square_root = sqrt(25);
   int absolute_value_for_int=abs(-2);
   float absolute_value_for_float=fabs(-2.5);
   
   printf("pow(3,2)=%f.\n ",power);
   printf("sqrt(25)=%f.\n ",square_root);
   printf("abs(-2)=%d.\n ",absolute_value_for_int);
   printf("fabs(-2.5)=%f.\n ",absolute_value_for_float);
    
   system("PAUSE"); 
  return 0;
}

