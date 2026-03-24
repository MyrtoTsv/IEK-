#include <stdio.h>
#include <stdlib.h>
 

int main()
{
system("CHCP 1253 > nul");  //ãéá ôá ÅëëçíéêÜ.
 

FILE *text_file;
int weight;
 

text_file = fopen("Harley.txt", "r");
 

if(!text_file)
{
printf("Äåí õðÜñ÷åé .txt áñ÷åßï!\n");
exit(1); //return 1;
}
else
{
fscanf(text_file, "%d", &weight);
printf("weight = %d.\n", weight);
}
fclose(text_file);
system("PAUSE");
return 0;
}
