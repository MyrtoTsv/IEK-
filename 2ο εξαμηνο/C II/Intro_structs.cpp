#include <stdio.h>
#include <stdlib.h>
#include <ctype.h> //gia thn toupper
//Thn struct thn dhlwnoume ekw apo thn main gia na einai gnwsth pera apo thn main ,global declaration
//Struct, einai ena kainourio eidos metavlhths , einai mia sunthesh metavlhtwn , diaforwn eidwn
//H diafora me to enumerator einai oti o enumerator exei senaria , h to ena h to allo , to struct exei periexomena

//To struct epitrepei mono metavlhtes , oxi sunarthseis.H C++ einai object oriented , h C oxi
//Ara me to struct eina ftiaxnoume instances(stigmiotypa) ennow sthn C einai ftiaxnoume objects
//Dhlwsh tou struct me ta periexomena ths

typedef struct Point{
	float x_coord;
	float y_coord;
	char letter;
}Point;

int main()
{
	Point p1 ,p2;
	
	//1o point
	printf("Dwse to x tou 1ou shmeiou: \n");
	scanf("%f",&p1.x_coord);
    printf("Dwse to y tou 1ou shmeiou: \n");
	scanf("%f",&p1.y_coord);
	getchar();
	printf("Dwse to gramma tou 1ou shmeiou: \n");
	scanf("%c",&p1.letter);
	
	//2o point
	printf("Dwse to x tou 2ou shmeiou: \n");
	scanf("%f",&p2.x_coord);
    printf("Dwse to y tou 2ou shmeiou: \n");
	scanf("%f",&p2.y_coord);
	getchar();
	printf("Dwse to gramma tou 2ou shmeiou: \n");
	scanf("%c",&p2.letter);
	
	//Ektypwsh points
	printf("\nShmeio 1:\n");
	printf("%c (%.2f, %.2f)\n",toupper(p1.letter),p1.x_coord,p1.y_coord);
	printf("\nShmeio 2:\n");
	printf("%c (%.2f, %.2f)\n",toupper(p2.letter),p2.x_coord,p2.y_coord);
	
	
//	p.x_coord = -3;
//	p.y_coord = 0.5;
//	p.letter = 'A';

	system("PAUSE");
	return 0;
}
