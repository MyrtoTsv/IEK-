#include <stdio.h> //για τις updated εντολές εισόδου/εξόδου
#include <stdlib.h> //για τις εντολές shell (terminal/cmd) (απαραίτητο για .cpp αρχεία κώδικα)
#include <stdbool.h>

#define SIZE 4

void push(char stack[], int *t)
{
    int x;

    if (*t == SIZE - 1)
        printf("\nOverflow!!");
    
    else
    {
        printf("\nEnter the element to be added onto the stack: ");
        scanf("%c", &x);
        
		(*t)++;
        stack[*t] = x;
    }
}

void pop(char stack[], int *t)
{
    if (*t == -1)
        printf("\nUnderflow!!");
    
    else
    {
        printf("\nPopped element: %c", stack[*t]);
        (*t)--;
    }
}

void show(char stack[], int *t)
{
	int i;
	
    if (*t == -1)
        printf("\n\tUnderflow! Stak is EMPTY!\n\a");
    
    else
    {
        printf("\nElements present in the stack: \n");
        
		for (i = *t; i >= 0; i--)
            printf("%c\n", stack[i]);
    }
}

int main(int argc, char **argv) //ή int main(int argc, char *argv[]) ή int main(void) ή int main()
{
    int choice, top = -1;
	char inp_array[SIZE];
    
	while (true)
    {
        printf("\nPerform operations on the stack:");
        printf("\n1.Push the element\n2.Pop the element\n3.Show\n4.End");
        printf("\n\nEnter your choice of operations: ");
		scanf("%d", &choice);
		getchar();
		
        switch (choice)
        {
	        case 1:
	            push(inp_array, &top);
	            break;
	        case 2:
	            pop(inp_array, &top);
	            break;
	        case 3:
	            show(inp_array, &top);
	            break;
	        case 4:
	            exit(0);
	        default:
	            printf("\nInvalid choice!!");
	    }
    }
	
	system("PAUSE"); //Για να προλάβει ο πελάτης να δει την τελευταία εκτύπωση (λειτουργεί μόνο σε Windows Λ.Σ.).
	return 0;
}
