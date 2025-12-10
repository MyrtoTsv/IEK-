#include <stdio.h>
#include <stdlib.h>
#include <math.h> //gia thn pow
#include <unistd.h> // gia tis sleep kai usleep
//#include <limits.h> //Gia tis INT_MAX, INT_MIN
int main(){
	int sum=0,min=pow(2,31)-1,max=-pow(2,31); //vazoume ta oria sthn min max. Max - gia naeinai to pio mikro noumero pou uparxei kai min + na einai to pio megalo noumero pou uparxei
	//int min = MIN_MAX , max = INT_MIN;
	//int min.max;
	unsigned count = 0;
	float avg,number;
	
	do
	{
		do{
			printf("Dwse enan akeraio h -1000 gia telos: \n");
			scanf("%f",&number);
			
			if (number != (int)number)
			{
				printf("\n\t\aDen einai akeraios. Ksanaprospathiste!\n");
				sleep(3); //3 sec. delay
				usleep(500000); // another 0.5 sec. delay
			}
		}while(number != (int)number);//mexri na eisagei akeraio

		if(number != -1000)
		{
			sum += number;
			count++;
			//if (count == 1)
			//{ max = number
			// mix = number;}
                                 
			if(number>=max)
			   max = number;
			
			if(number<=min)
			   min = number;
		  
		  avg = (float)sum/count;
		}
		
	}while(number != -1000);//mexri na eisagei -1000
	
	if(count == 0)
	   printf("Den eisagate kanena akeraio ektous tou -1000\n");
	else
	{
		printf("Dwsate %d akeraies times ektos tou -1000\n",count);
		printf("O megaluteros ektos tou -1000 einai o %d\n",max);
		printf("O mirkoteros ektos tou -1000 einai o %d\n",min);
		printf("O mesos oros olwn ektos tou -1000 eiani o %.f\n",avg);		
	}
	
	return 0;
	system("PAUSE");
}




