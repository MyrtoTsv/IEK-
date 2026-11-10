#include <iostream>
#include <ctime>
#include <cstdlib>//for rand - srand
#include <conio.h>//for getch
using namespace std;

int main()
{
	// This pointer will hold the base address of the block created 
    int *array, size, i; 
  
    ////////////////////////NEW MODE//////////////////////////////
    // Give the number of elements for the array 
     cout<<"Enter number of elements:"; 
     cin>>size;
  
  	 array = new int[size]; //equivalent of malloc/calloc
  	
	// Check if the memory has been successfully allocated by malloc or not 
    if (array == NULL || size==0) 
	{ 
        cout<<"Memory not allocated.\n"; 
        exit(1); 
    } 
    else 
	{// Memory has been successfully allocated 
        cout<<"Memory successfully allocated using NEW.\nPress any key when ready..";
		getch(); 
  
        // Calculate random elements of the array (1 -> 9)
		srand(time(0)); 
        for (i = 0; i < size; i++) 
            array[i] = 1+rand()%9; 
  
        // Print the elements of the array 
        cout<<"\n\nThe elements of the array are:\n-----------------------------------\n"; 
		for (i = 0; i < size; i++) 
             cout<<"Array["<<i<<"]: "<< array[i]<< " RAM_Block["<<&array[i]<<"]\n"; 
    }
	
	delete [] array;
	
	system("PAUSE");
	return 0;
}
