
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h> //για τις sleep και usleep

 
int main()
{
system("CHCP 1253 > nul");  //για τα Ελληνικά.

 
float number;
double factorial = 1;
unsigned i;

 
do
{
printf("Δώσε έναν μη αρνητικό ακέραιο αριθμό: ");
scanf("%f", &number);

 
if(number < 0 || number != (int)number)
{
printf("Λάθος!!\n\a");
printf("Παρακαλώ ξαναπροσπαθήστε. . .\n");
sleep(3); //3 sec. delay
usleep(500000); //0 -> 999999 //0.5 sec. delay
system("CLS");
}
}while(number < 0 || number != (int)number);

 
for(i=1; i<=(int)number; i++)
factorial *= i;

 
printf("Το παραγοντικό του %.0f είναι ίσο με %.0lf.\n", number, factorial); 
    system("PAUSE");
return 0;
}
