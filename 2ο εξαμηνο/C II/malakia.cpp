#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h> //gia thn bool,thn flag
#include <ctype.h> //gia thn toupper

#define size_i = 3 ,size_j = 3

void sunarthsh_triliza(){

printf("TRILIZA\n");
printf("---------------------------------------------\n");
printf("\t\t\t - |  -  | -\n");
printf("\t\t\t ---+-----+---\n");
printf("\t\t\t - |  -  | -\n");
printf("\t\t\t ---+-----+---\n");
printf("\t\t\t - |  -  | -\n");

printf("\n");
}

typedef struct syntetagmenes{
	int x,y;
}syntetagmenes;


int main(){

int i;
char triliza = [size_i,size_j],paikths_1;
bool flag;
syntetagmenes s;

do{
	flag = 1; //dhlwnoume oti h flag einai true
	
	printf("PAIKTH 1,me ti sumvolo thes na paikseis?Apanta me latinika me 'O', 'o', 'X', 'x':");
    scanf("%c",&paikths_1);
    
    if(paikths_1 != 'O' && paikths_1 != 'o' && paikths_1 != 'X' || paikths_1 !='x'){
    	flag = 0 //h flag ginetai false gia na ksanazhthsei input
    	
	}else if(paikths_1=='O'|| paikths_1 =='o' || paikths_1 =='X' || paikths_1 =='x'){
    	printf("PAIKTH 1, to sumvolo sas einai to %c\n",toupper(paikths_1));
    	printf("\n")
    	printf("\n");
    	printf("\n");
    	
    	 if (paikths_1 == 'o'|| paikths_1 == 'O'){
    		paikths_2 = 'X';
    		paikths_1 = 'O';
    	 else{
    		paikths_2 = 'O';
    		paikths_1 = 'X';
	      }
     	}
     	
	    do{
				printf("Se poia thesi thes na paikseis me to sumvolo %c;Apanta me ton arithmo grammhs kai arithmo sthlhs, apo 0 mexri 2, XWRIS KOMMA(p.x. 0 0):\n",paikths_1);
				scanf("%c%c",&s.x&s.y);
	    
	    if(triliza[s.x,s.y] != 'X' && triliza[s.x,s.y] != 'O') //elegxei an uparxei hdh sumvolo sto trexon keli
	        triliza[s.x,s.y] = paikths_1l;
	    
	    }while(s.x != 0 && s.x !=1 && s.x !=2 && s.y!=0 && s.y !=1 && s.y !=2)	
		
	
	       // h for tha mpei mono gia na elegksoume an uparxei triliza , giati etsi prospelaunoume ton pinaka kai elegxoume!!! (kai se sunarthsh)
			for i=0; i<3; i++{
	      		for(j=0; j<3; j++){
	    
	   				 printf("")
		
				} 
           }
 


}while(flag==0) //Oso h flag paramenei false to programma tha zhtaei input mexri na ginei swsto

return 0;
}
