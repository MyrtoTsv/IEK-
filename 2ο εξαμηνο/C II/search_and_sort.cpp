#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

#define SIZE 5

void printArray(float *array, const size_t size, const char *msg)
{
	size_t i;
	
	printf("\n%s\n", msg);
	for (i=0; i<size; i++)
		printf("%.2f\t", array[i]);
	printf("\n");
}

void swapTwoValues(float *x, float*y)
{
	float temp = *x;
	*x = *y;
	*y = temp;
}

void bubbleSortArray(float *array, const size_t size)
{
	size_t i, j;
	char msg[50];
	
	for(i=0; i<size - 1; i++)
	{
		for (j = 0; j<size - 1; j++)
			if(array[j] > array[j + 1])	//gia fhinousa array[j] < array[j +1]
				swapTwoValues(&array[j], &array[j + 1]);
		//printArray(array, size, "WHILE SORTING ARRAY\n----------------");
	}
}

int main()
{
	system("CHCP 1253 > nul");	//ãéá ôá ÅëëçíéêÜ
	
	size_t i;
	float matrix[SIZE];
	
	//DATA INPUT
	for(i=0; i<SIZE; i++)
	{
		printf("ÅéóÜãåôå ôï óôïé÷åßï [%d] ôïõ ðßíáêá: ", i+1);
		scanf("%f", &matrix[i]);
	}
	system("CLS");
	
	printArray(matrix, SIZE, "UNSORTED ARRAY\n---------------");
	
	//TAKSINOMISE PINAKA
	bubbleSortArray(matrix, SIZE);
	
	printArray(matrix, SIZE, "SORTED ARRAY\n---------------");
	
	system("PAUSE");
	return 0;
}
