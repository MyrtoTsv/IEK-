#include <stdio.h>
#include <stdlib.h>

int main(){
	float grade;
	printf("dose vathmo\n");
    scanf("%f",&grade);
    
    if (grade >= 5 && grade <=10)
    {
    	printf("perases\n");
    	
    	if(grade<6.5)
    		printf("kalos\n");
    	else if(grade<8.5)
    	    printf("lian kalos\n");
    	else
    	    printf("arista\n");
		
	}
	
	else if(grade <5 && grade >=0)
	{
		printf("den perases\n");
	}
	else
	{
		printf("lathos arithmos , dwse allo\n");
    }
    
    printf("\n");
    system("PAUSE >nul");
    return 0;
}
