#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
 

#define SIZE 5
 

int binarySearchArray(float *sorted_array, const size_t size, float element)
{
size_t low = 0;
size_t high = size-1;
size_t middle;
    
while (low <= high)
    {
        middle = low + (high - low)/2;
        
if (element > sorted_array[middle])
            low = middle + 1;
        else if (element < sorted_array[middle])
            high = middle - 1;
        else
            return middle;
    }
    return -1;
}
 

int linearSearchArray(float *array, const size_t size, float element)
{
size_t i;
 

int pos = -1;
 

for(i=0; i<size; i++)
{
if(element == array[i]) //An vrethei to stoixeio
{
pos = i;  //apothikeuse ti THESI toy stoixeiou sto pos
break; //tha ipologistei i 1i thesi poy vrethike
}
}
return pos;
}
 

void printArray(float *array, const size_t size, const char *msg)
{
size_t i;
 

printf("\n%s\n", msg);
for (i=0; i<size; i++)
printf("%.2f\t", array[i]);
printf("\n");
}
 

void swapTwoValues(float *x, float *y)
{
float temp = *x;
*x = *y;
*y = temp;
}
 

// Partition
int partition(float *array, int left, int right)
{
    int i = left - 1, j;
    
float pivot = array[right];
 

    for (j = left; j < right; j++)
        if (array[j] <= pivot)  //gia fthinousa array[j] >= pivot
        {
            i++;
            swapTwoValues(&array[i], &array[j]);
        }
 

    swapTwoValues(&array[i + 1], &array[right]);
    
//printArray(array, SIZE, "WHILE SORTING ARRAY\n----------------");
 

return i + 1;
}
 

//            QuickSort
void quickSortArray(float *array, int left, int right)
{
    if (left < right)
    {
        int pivotIndex = partition(array, left, right);
        
        quickSortArray(array, left, pivotIndex - 1);
        quickSortArray(array, pivotIndex + 1, right);
    }
}
 

void bubbleSortArray(float *array, const size_t size)
{
    size_t i, j;
char msg[50];
 

    for (i = 0; i < size - 1; i++)
    {
        for (j = 0; j < size - i - 1; j++)                    
            if (array[j] > array[j + 1]) //gia fthinousa array[j] < array[j + 1]
                swapTwoValues(&array[j], &array[j + 1]);       
        //printArray(array, size, "WHILE SORTING ARRAY\n----------------");
    }
}
 

int main()
{
system("CHCP 1253 > NUL");
 

size_t i;
float matrix[SIZE], element;
int position = -1;
 

//DATA INPUT
for (i=0; i<SIZE; i++)
{
printf("Εισάγετε το στοιχείο  [%d] τού πίνακα: ", i+1);
scanf("%f", &matrix[i]);
}
system("CLS");
 

printArray(matrix, SIZE, "UNSORTED ARRAY\n----------------");
 

//TAKSINOMHSE PINAKA
//bubbleSortArray(matrix, SIZE);
quickSortArray(matrix, 0, SIZE-1);
 

printArray(matrix, SIZE, "SORTED ARRAY\n----------------");
 

printf("\n\nΠοιο στοιχείο ψάχνεις μέσα στον πίνακα; ");
scanf("%f", &element);
 

//position = linearSearchArray(matrix, SIZE, element);
position = binarySearchArray(matrix, SIZE, element);
 

if(position == -1)
printf("\nΤο στοιχείο %.2f δεν υπάρχει στον πίνακα.\n", element);
else
printf("\nΤο στοιχείο %.2f υπάρχει στον πίνακα στη θέση %d.\n", element, position);
 

printf("\n\n");
 

system("PAUSE");
return 0;
}




