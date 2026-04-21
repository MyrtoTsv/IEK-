#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h> //gia thn bool,thn flag
#include <ctype.h> //gia thn toupper

#define SIZE 3 //to megethos tou pinaka

//Ftiaxnoume tis suntetagmenes se typou struct
typedef struct syntetagmenes{
	int x,y;
}syntetagmenes;


//Sunarthsh pou tha ektupwnei kathe fora thn triliza meta thn kinhsh kathe paikth
void sunarthsh_triliza(char triliza[SIZE][SIZE]){
	//antistoixoume kathe - me ta kelia tou pinaka gia na fainetai ta sumvola pou topothetountai
    printf("TRILIZA\n");
    printf("---------------------------------------------\n");
    printf("\t\t\t %c |  %c  | %c\n",triliza[0][0],triliza[0][1],triliza[0][2]);
    printf("\t\t\t---+-----+---\n");
    printf("\t\t\t %c |  %c  | %c\n",triliza[1][0],triliza[1][1],triliza[1][2]);
    printf("\t\t\t---+-----+---\n");
    printf("\t\t\t %c |  %c  | %c\n",triliza[2][0],triliza[2][1],triliza[2][2]);
    printf("\n");
}


//Sunarthsh pou pairnei san eisodo ton pinaka ths Trilizas me tis suntetagmenes kai elegxeis oles tis pithanes trilizes gia na dei an nikhse

int elegxos_triliza(char triliza[SIZE][SIZE],syntetagmenes s){
	                 //Oi periptwseis pou mporoume na exoume triliza ston 3x3 pinaka einai 8, ara ta xwrizoume se 4 kathgories:
	                 //Kanoume return 1 stis periptwseis nikhs 
	                //1h:elegxoume an oles oi grammes exoun to idio periexomeno gia triliza
	   				if (triliza[s.x][0] == triliza [s.x][1] && triliza[s.x][1] == triliza[s.x][2]&& triliza[s.x][0] != '-'){
							return 1;
				    }
					//2h:elegxoume an oles oi sthles exoun to idio periexomeno gia triliza
				    if (triliza[0][s.y] == triliza [1][s.y] && triliza[1][s.y] == triliza[2][s.y]&& triliza[0][s.y] != '-'){
							return 1;
				    }
					 //3h:elegxoume an h mia diagwnios exei triliza
    				if(triliza[0][0] == triliza[1][1] && triliza[1][1] == triliza[2][2]&& triliza[0][0] != '-'){
							return 1; 
			     	}
					//4h:elegxoume an kai h allh mia diagwnios exei triliza		
    				if(triliza[0][2] == triliza[1][1] && triliza[1][1] == triliza[2][0]&& triliza[0][2] != '-'){
        					return 1;
        		    }
        		    //Extra periptwsh:Isopalia
        			//Orizoume to flag true. An uparxei keno , tote flag false, einai gemato ara oxi isopalia
        			int flag = 1;
				    for(int i=0;i<3;i++){
				        for(int j=0;j<3;j++){
				            if(triliza[i][j] == '-'){
				                flag = 0;
				            }
				        }
				    }
				    //An vgei se ola ta kelia sumvolo,dhladh flag true , tote Isopalia
				    if(flag){
				        printf("ISOPALIA!\n");
				        return 1;
				    }
        		    
     return 0;
}


int main(){

int i,j;
char triliza[SIZE][SIZE],paikths_1,paikths_2,seira_paikth;
bool flag;
syntetagmenes s;

  //Arxikopoihsh tou pinaka , se ola ta kelia -
    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            triliza[i][j] = '-';
        }
    }
    //Prwth ektupwsh ths trilizas me ta -
    sunarthsh_triliza(triliza);
    
    //Epilogh symvolou mono 'O' ,'o', 'X', 'x'
    do{
    	printf("PAIKTH 1,me ti sumvolo thes na paikseis?Apanta me latinika me 'O', 'o', 'X', 'x':");
    	scanf(" %c" , &paikths_1); 
    }while(paikths_1 != 'O' && paikths_1 != 'o' && paikths_1 != 'X' && paikths_1 !='x');
    
 system("CLS");
	
 do{
    
    //Kaloume thn sunarthsh pou ektupwnei kathe fora ton pinaka pou tha fainetai h triliza
		    sunarthsh_triliza(triliza);
		    
	if(paikths_1=='O'|| paikths_1 =='o' || paikths_1 =='X' || paikths_1 =='x'){
    	printf("PAIKTH 1, to sumvolo sas einai to %c\n",toupper(paikths_1));
    	printf("\n");
    	printf("\n");
    	printf("\n");
    	
    	 if (paikths_1 == 'o'|| paikths_1 == 'O'){
    		paikths_2 = 'X';
    		paikths_1 = 'O';
    	 }else{
    		paikths_2 = 'O';
    		paikths_1 = 'X';
	      }
    }
     //Orizoume ton paikth_1 , to sumvolo tou ws ton twrino paikth pou exei seira
     seira_paikth = paikths_1; 
	
		
		//Mesa se auto to do while ginetai ,paizetai o paixnidi
		//Tha elegxei thn thesh , tha allazei paixth , tha vlepei an uparxei triliza kai ksanagurizei
		do{
	
		    //Den afhnei ton paikth na paiksei an einai ektos twn oriwn tou pinaka 
		    do{
		    	flag = 1;
		    	//Vazoume seira_paikth giati kathe fora pou tha topothetitai ena sumvolo , tha allazei o paikths
		    	printf("Se poia thesh thes na paikseis me to sumvolo %c; Apanta me ton arithmo grammhs kai arithmo sthlhs, apo 0 mexri 2, XWRIS KOMMA (p.x. 0 0)",seira_paikth);
		    	scanf("%d %d", &s.x, &s.y);
				while(getchar()!='\n');
        		
        		//An ksepernaei ta oria , h flag ginetai 0 kai ksanazhtaei input
		        if(s.x < 0 || s.x > 2 || s.y < 0 || s.y > 2){
		        	flag = 0;
		        	
                //An h thesh pou thelei na valei den einai kenh , dhladh den exei pavla , tote continue kai ksanaphgaine na valeis swstes syntetagmenes se eleutherh thesh
				}else if(triliza[s.x][s.y] != '-'){
		       	 	flag = 0;
		    	}
		    
		    }while(flag == 0);
		    
			//Vazoume to sumvolo tou trexonta paikth stis sunetagmenes pou epelekse   
		    triliza[s.x][s.y] = seira_paikth;
		    
		    system("cls");
			sunarthsh_triliza(triliza);
			
			printf("PAIKTH 1, to sumvolo sas einai to %c\n",seira_paikth);
			printf("\n");
        	printf("\n");
    	    printf("\n");
			
			//otan gemisei h thesh , kanoume swap ton current paikth me ton allon paikth kai ksanatrexei to programma   
		    if(seira_paikth == paikths_1){
		    		seira_paikth = paikths_2;
			}else{
		   			seira_paikth = paikths_1;
		    }
		    
		
	   }while(elegxos_triliza(triliza, s) == 0);//To paixnidi tha sunexizei mexri na kanei return 1(na vrei triliza) h sunarthsh elegxos_trilizas

}while(elegxos_triliza(triliza, s) == 0);

 
	 //telos paixnidiou , anakoinwsh nikhth
	 if (seira_paikth == paikths_1){
	 		printf("KERDISE o/h 1os/h paikths/paiktria!");
	 }else{
	 	printf("KERDISE o/h 2os/h paikths/paiktria!");
	  }

return 0;
}
