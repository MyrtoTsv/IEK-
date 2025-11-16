#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>

int main(){
	
	char letter1,letter2;
	float x1,x2,y1,y2;
	
	system("CHCP 1253 > nul");
	
	printf("Δώσε μου το γράμμα του 1ου σημείου\n");
	scanf("%c",&letter1);
	getchar();//ειναι bug της C ,το βαζουμε για να απορροφάει το character
	printf("Δώσε μου το γράμμα του 2ου σημείου\n");
	scanf("%c",&letter2);
	
	printf("Δώσε μου τις συντεταγμένες x,y του 1ου σημείου\n");
	scanf("%f%f",&x1,&y1);
	
	printf("Δώσε μου τις συντεταγμένες x,y του 2ου σημείου\n");
	scanf("%f%f",&x2,&y2);
	
	float distance = sqrt(pow(x2-x1,2) + pow(y2-y1,2));
		
	printf("Η απόσταση του μεταξύ των σημείων %c και %c είναι %f\n",toupper(letter1),toupper(letter2),distance)
	
   system("PAUSE"); 
  return 0;
}


