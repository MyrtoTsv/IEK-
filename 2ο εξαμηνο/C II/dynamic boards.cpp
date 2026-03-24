#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>

int main()
{
	float *array;
	int i, size;
	
	printf("Enter number of elements: ");
	scanf("%d", &size);
	
	array = (float *)malloc(size * sizeof(float));
	
	if (array == NULL || size <= 0)
	{
		printf("Memory not allocated.\n");
		exit(1); //return 1;
	}
	else
	{
		printf("Memory successfully allocated using MALLOC/CALLOC.\n" 
			"Press any key when ready..");	
		getch();
		
		srand(time(0));
		for (i = 0; i < size; i++)
			array[i] = 1 + rand()%9;
		
		printf("\n\nThe elements of the array are:\n-----------------------------------------------\n");
		for (i = 0; i < size; i++)
			printf("Array [%d]: %.2f RAM_Block[%d]\n", i, array[i], &array[i]);	
	}
	
	printf("\n\nEnter NEW number of elements: ");
	scanf("%d", &size);
	
	array = (float *)relloc(array, size * sizeof(float));	
	
	if (array == NULL || size <= 0)
	{
		printf("Memory not allocated.\n");
		exit(1); //return 1;
	}
	else
	{
		printf("Memory successfully allocated using MALLOC/CALLOC.\n" 
			"Press any key when ready..");	
		getch();
		
		srand(time(0));
		for (i = 0; i < size; i++)
			array[i] = 1 + rand()%9;
		
		printf("\n\nThe elements of the array are:\n-----------------------------------------------\n");
		for (i = 0; i < size; i++)
			printf("Array [%d]: %.2f RAM_Block[%d]\n", i, array[i], &array[i]);	
	}	
}
