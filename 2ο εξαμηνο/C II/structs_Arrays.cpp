#include <stdio.h>
#include <stdlib.h>
#include <ctype.h> //gia thn toupper
//Thn struct thn dhlwnoume ekw apo thn main gia na einai gnwsth pera apo thn main ,global declaration
//Struct, einai ena kainourio eidos metavlhths , einai mia sunthesh metavlhtwn , diaforwn eidwn
//H diafora me to enumerator einai oti o enumerator exei senaria , h to ena h to allo , to struct exei periexomena

//To struct epitrepei mono metavlhtes , oxi sunarthseis.H C++ einai object oriented , h C oxi
//Ara me to struct eina ftiaxnoume instances(stigmiotypa) ennow sthn C++ einai ftiaxnoume objects
//Dhlwsh tou struct me ta periexomena ths

typedef struct Point{
	float x_coord;
	float y_coord;
	char letter;
}Point;

int main()
{
	int i;
	Point p[2]; //p[0],p[1]
	
    for (i=0; i<2; i++){
    	printf("Dwse to x tou %dou shmeiou: \n",i+1);
     	scanf("%f",&p[i].x_coord);
        printf("Dwse to y tou %dou shmeiou: \n",i+1);
     	scanf("%f",&p[i].y_coord);
    	getchar();
    	printf("Dwse to gramma tou %dou shmeiou: \n",i+1);
	    scanf("%c",&p[i].letter);
	
}
	
	//Ektypwsh points
	for(i=0; i<2; i++)
	{
	    printf("\nShmeio %d:\n");
    	printf("%c (%.2f, %.2f)\n",toupper(p[i].letter),p[i].x_coord,p[i].y_coord);
    }
	
	
//	p.x_coord = -3;
//	p.y_coord = 0.5;
//	p.letter = 'A';

	system("PAUSE");
	return 0;
}
