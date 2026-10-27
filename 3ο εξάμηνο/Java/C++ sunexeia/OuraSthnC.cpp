#include <stdio.h> //για τις updated εντολές εισόδου/εξόδου
#include <stdlib.h> //για τις εντολές shell (terminal/cmd) (απαραίτητο για .cpp αρχεία κώδικα)
#include <stdbool.h>

#define SIZE 3

void enqueue(char queue[], int *r, int *f) 
{
    char insert_item;

    if (*r == SIZE - 1)
        printf("\n\tOverflow! Queue is FULL!\n\a");
    else 
	{
        if (*f == -1)
            *f = 0;

        printf("\n\tElement to be inserted in the Queue: ");
        scanf(" %c", &insert_item); // Space before %c to handle newline issues
		
		(*r)++;

        queue[*r] = insert_item;
    }
}

void dequeue(char queue[], int *r, int *f)
{
    if (*f == -1 || *f > *r) 
        printf("\n\tUnderflow! Queue is EMPTY!\n\a");
    else
	{
        printf("\n\tElement deleted from the Queue: %c\n", queue[*f]);
        (*f)++;
        
        if (*f > *r) 
		{ // Reset queue when empty
            *f = -1;
            *r = -1;
        }
    }
}

void show(char queue[], int *r, int *f) 
{
    int i;

    if (*f == -1)
        printf("\n\tEmpty Queue...\n");
    else
	{
        printf("\nQueue: \n\t");
        
        for (i = *f; i <= *r; i++)
            printf("%c\t", queue[i]);
        
        printf("\n");
    }
}

int main(int argc, char **argv) //ή int main(int argc, char *argv[]) ή int main(void) ή int main()
{
    char inp_arr[SIZE];
    int choice, rear = -1, front = -1; // Initialize both to -1

    while (true) 
	{
        printf("\n1. Enqueue Operation\n");
        printf("2. Dequeue Operation\n");
        printf("3. Display the Queue\n");
        printf("4. Exit\n");
        printf("Enter your choice of operations: ");
        scanf("%d", &choice);
		getchar();
		
        switch (choice) 
		{
            case 1:
                enqueue(inp_arr, &rear, &front);
                break;
            case 2:
                dequeue(inp_arr, &rear, &front);
                break;
            case 3:
                show(inp_arr, &rear, &front);
                break;
            case 4:
                printf("Exiting...\n");
                return 0;
            default:
                printf("Incorrect choice\n");
        }
    }
	
	system("PAUSE"); //Για να προλάβει ο πελάτης να δει την τελευταία εκτύπωση (λειτουργεί μόνο σε Windows Λ.Σ.).
	return 0;
}
