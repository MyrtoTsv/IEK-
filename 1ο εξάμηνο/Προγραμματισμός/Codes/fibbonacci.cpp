#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

//void printFibonacci(int n)
//{
//	//if the number of terms is smaller than 1
//	if (n < 1)
//	{
//		printf("Invalid Number of terms\n");
//		return;
//	}
//	
//	int first = 0, sec = 1, i, sum = 0;
//	
//	//for loop that prints n terms of fibonacci series
//	for(i = 1; i<=n; i++)
//	{
//		
//		//Printf current term and update previous series
//		if (i >2)
//		{
//			sum = first + sec;
//			first = sec;
//			sec = sum;
//			printf("%d \n", sum);
//		}
//		else if(i == 1)
//			printf("%d \n", first);
//		else if(i == 2)
//			printf("%d \n", sec);	
//	}
//}

//int fibonacci(int sum)
//{
//	if (num == 0)
//		return 0;
//	else if (num == 1)
//		return 1;
//	else
//		return fibonacci(num - 1) + fibonacci(num - 2);
//}

int fibonacci(int sum)
{
	if (sum == 0 || sum ==1)
		return sum;
	else
		return fibonacci(sum-1) + fibonacci(sum-2);	//recursion
}

int main()
{
	system("CHCP 1253 > nul"); //για τα Ελληνικά
	double number;
	size_t i;
	
	do
	{
	printf("Δώστε έναν μη αρνητικό ακέραιο: ");
	scanf("%lf", &number);
	
	if(number<0 || number != (int)number)
		{
			printf("Λάθος αριθμός!\n\a");
			sleep(3);
			system("CLS");
		}
	}while(number<0 || number != (int)number);
	
	//printFibonacci(number);
	for(i=0; i<number; i++)
		printf("%d, ", fibonacci(i));
	
	printf("\n");
	system("PAUSE");
	return 0;
}
