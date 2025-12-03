#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int i,sum;
	sum=0;
	for(i=0; i<=36; i++){
		sum = sum + i;
	}
//	i=0;
//	while(i<=36){
//		sum = sum + i;
//		i++;
//	}

//   i=0;
//   do{
//   	sum = sum +i;
//   	i++;
//   }while(i<=36);
 
 
 printf("%d\n",sum);
 system("PAUSE");
 return 0;
}

