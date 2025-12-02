#include <stdio.h>
#include <stdlib.h>

int main(){
	
	float num1,num2,result;
	char praksh;
	
	printf("Dwse mou enan arithmo\n");
	scanf(" %f",&num1);
	
	printf("Dwse mou ena symvolo prakshs\n");
	scanf(" %c",&praksh);
	
	printf("Dwse mou enan deutero arithmo\n");
	scanf(" %f",&num2);
	
	if (praksh=='+') {
        result=num1+num2;
        printf("To apotelesma einai: %.2f\n",result);
    }
    else if (praksh=='-') {
        result=num1-num2;
        printf("To apotelesma einai: %.2f\n",result);
    }
    else if (praksh=='*') {
        result=num1*num2;
        printf("To apotelesma einai: %.2f\n",result);
    }
    else if (praksh=='/') {
        if (num2==0) {
            printf("Diareis me to mhden. Lathos!\n");
        } else {
            result =num1/num2;
            printf("To apotelesma einai: %.2f\n",result);
        }
    }
    else {
        printf("Lathos symbolo prakshs!\n");
    }

	
	printf("\n");
	system("PAUSE > nul");
	return 0;
}
