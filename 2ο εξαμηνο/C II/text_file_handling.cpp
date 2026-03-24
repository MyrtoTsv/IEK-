#include <stdio.h>
#include <stdlib.h>

int main()
{
	system("CHCP 1253 > nul"); //ãéá ôá ÅëëçíéêÜ.
	
	FILE *text_file;
	float x, y, sum, diff, max, temp_sum, temp_diff;          
	
	printf("Äşóå ôïí 1ï áñéèìü: ");
	scanf("%f", &x);
	printf("Äşóå ôïí 2ï áñéèìü: ");
	scanf("%f", &y);
	
	sum = x + y;
	diff = x - y;
	
	text_file = fopen("sum.txt", "w");
	fprintf(text_file, "%f", &sum);
	fclose(text_file);
	
	text_file = fopen("difference.txt", "w");
	fprintf(text_file, "%f", &diff);
	fclose(text_file);
	
	text_file = fopen("sum.txt", "r");
	fprintf(text_file, "%f", &temp_sum);
	fclose(text_file);
	
	text_file = fopen("difference.txt", "r");
	fprintf(text_file, "%f", &temp_diff);
	fclose(text_file);
	
	text_file = fopen("Maximum.txt", "w");
	if(temp_sum - temp_diff > 0)
		fprintf(text_file, "%f", temp_sum);
	else
		fprintf(text_file, "%f", temp_diff);
	fclose(text_file);
	
	system("PAUSE");
	return 0;
}
