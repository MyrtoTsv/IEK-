Na grafei programma se glwssa C to opoio na zhtaei apo ton xrhsth duo akeraies times 
oi opoies na ektupwnontai mesw katallhlhs sunarthshs.Sth sunexeia na dhmiourgithei 
2h sunarthsh h opoia tha antimetathetei (swap) tis duo metavlhtes px x=9 y=7 , ara x=7 y=9
(Kai oi duo sunarthseis tha einai void)
Na xrhsimopoithoun oi sunarthseis aytes sthn main se ena paradeigma


#include <stdlib.h>
#include <stdio.h>

void printTwoValues(int x, int y)
{
	printf("x = %d\ty = %d\n", x, y);
}

void swapTwoValues(int *x, int *y)
{
	int temporary = *x;
	*x = *y;
	*y = temporary;
}

int main()
{
	system("CHCP 1253 > nul");	//ãéá ôá ÅëëçíéêÜ
	
	int a, b;
	
	printf("Äþóå ôçí ðñþôç áêÝñáéá ôéìÞ: ");
	scanf("%d", &a);
	printf("Äþóå ôçí äåýôåñç áêÝñáéá ôéìÞ: ");
	scanf("%d", &b);
	system("CLS");
	
	printTwoValues(a, b);	//before swap
	swapTwoValues(&a, &b);
	printTwoValues(a, b);	//after swap
	
	system("PAUSE");
	return 0;
}
