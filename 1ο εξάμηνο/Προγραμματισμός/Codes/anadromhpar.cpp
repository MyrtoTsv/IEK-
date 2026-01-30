#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

//double factorialOfNumber(double n)
//{
//	size_t i;
//	double result = 1;
//	
//	for(i=1; i<=n; i++)
//		result *= i;  //result = result * i;
//		
//	return result;
//}

double factorialOfNumber(double n)
{
	if(n == 0 || n == 1)
		return 1;
	else
		return n * factorialOfNumber(n-1);	//recursion
}

int main()
{
	system("CHCP 1253 > nul"); //για τα Ελληνικά
	double number, factorial;
	
	do
	{
		printf("Δώσε μη αρνητικό ακέραιο: ");
		scanf("%lf", &number);
		
		if(number<0 || number != (int)number)
		{
			printf("Λάθος αριθμός!\n\a");
			sleep(3);
			system("CLS");
		}
	}while(number<0 || number != (int)number);
	
	factorial = factorialOfNumber(number);
	
	printf("Το παραγoντικό του %.0lf είναι %.0lf\n", number, factorial);
	
	system("PAUSE");
	return 0;
}
