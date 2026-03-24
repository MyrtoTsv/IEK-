#include <stdio.h>
#include <stdlib.h>
#include <ctype.h> //gia thn toupper
#include <math.h> // gia power kai sqrt

typedef struct Point{
	float x_coord;
	float y_coord;
	char letter;
}Point;

//apostash
float distanceOfTwoPoints(Point a, Point b)
{
	return sqrt(pow(a.x_coord-b.x_coord,2)+pow(a.y_coord-b.y_coord,2));
}

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

    printf("ta duo shmeia apexoun %f monades mhkous.\n",distanceOfTwoPoints(p[0],p[1]));
	system("PAUSE");
	return 0;
}
