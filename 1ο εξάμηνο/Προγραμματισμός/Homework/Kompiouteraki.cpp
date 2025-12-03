#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h> //Gia ta true false bool

int main(){
	
	float num1,num2,result;
	char praksh;//valid values are +,-,*,/
	bool flag = true;//true means everything is ok
	
	printf("Dwse mou enan arithmo\n");
	scanf("%f",&num1);
	
	printf("Dwse mou ena symvolo prakshs\n");
	scanf("%c",&praksh);
	getchar();//empty buffer from ENTER
	
	printf("Dwse mou enan deutero arithmo\n");
	scanf("%f",&num2);
	
	if (praksh=='+') 
        result=num1+num2;
    else if (praksh=='-') 
        result=num1-num2;
    else if (praksh=='*') 
        result=num1*num2;
    else if (praksh=='/') 
        if (num2==0) {
		
            result =num1/num2;
        }else{
		
            flag = false;
            printf("Diaireis me to 0!\n");}
    else{
	
        flag = false;
    }    printf("Lathos symbolo prakshs!\n");
  // switch(praksh){
	 // case'+':
  //       result=num1+num2;
  //       break;
  //    case'-' :
  //       result=num1-num2;
  //       break;
  //    case'*':
  //       result=num1*num2;
  //       break;
  //    case'/':
  //       if (num2==0) {
  //        result =num1/num2;
  //       }else{
		
  //           flag = false;
  //           printf("Diaireis me to 0!\n");}
  //       break;
  //     default:
  //       flag = false;
  //       printf("Lathos symbolo prakshs!\n");
        
	if(flag==true)    
      printf("To apotelesma einai: %.2f\n",result);
    
	
	printf("\n");
	system("PAUSE");
	return 0;
}

