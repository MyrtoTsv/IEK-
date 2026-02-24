
#include <stdio.h>
#include <stdlib.h>

 
void level2(int *empeiria)
{
printf("empeiria is %d.\n", *empeiria);
*empeiria += 1000;
printf("empeiria is %d.\n", *empeiria);
}

 
int main()
{
system("CHCP 1253 > nul");  //για τα Ελληνικά.

 
int experience = 5;

 
printf("Experience is %d.\n", experience);
level2(&experience);  //call by reference
printf("Experience is %d.\n", experience);

 
    system("PAUSE");
return 0;
}
