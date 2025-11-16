#include<stdio.h>
#include<stdlib.h>


int main(){
	
	system("CHCP 1253 > nul");
	
	char small_number = 5;
	char small_answer='y';
	char big_answer[]="Yes I Do";
	int common_integer = 3000;
	unsigned int second_integer = -123;
	float fever=36.6;
	double huge_number= 987654.321;
	
	printf("small_number = %d. \n",small_number);
	printf("small_answer = '%c.' \n",small_answer);
   printf("big_answer[] = \"%s\". \n",big_answer);
	printf("common_integer = %d. \n",common_integer);
	printf("unsigned int second_integer = %d. \n",second_integer);
	printf("float fever = %.1f. \n",fever);
	printf("double huge_number = %.3lf. \n",huge_number);
	
	int noumero;
	printf("Τι τιμη θες να εχει;");
	scanf("%d",&noumero);
	
	printf("H μεταβλητη έχει τιμή %d.\ n",noumero);
	
	system("PAUSE");
	return 0;
}
