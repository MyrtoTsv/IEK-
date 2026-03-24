#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//enumerator=aparithmiths.
//Einai otan exw ena senario , me pithanes times.Fight o agwnas , Player1,Player2,Draw oi times
//Ta player1 etc den einai string, einai timh
//Auto einai kvantismeno megethos,dhladh mporei na parei mono oti times exw valei

int main()
{
	typedef enum Fight
	{
	    Player1 = 1, 
	    Player2, 
	    Draw
	}Fight;//Pascal case , otan to prwto gramma kathe lekshs mpainei me kefalaio
	//by default to Player1 antistoixizetai me to 0, to Player2 me to 1 kai to Draw me to 2
	//an thelw na ksekinaei apo allh timh , to grafw prwto
	//enumeration mono kai paei kai se ola automata px. enum Fight{Player=1,Player,Draw}
	
	Fight game1; // to Fight einai eidos dikhs mou metavlhths.To onoma ths einai game1
	unsigned input_value;//Auto einai to snake case ,me _
	
	printf("Who has won??");
	scanf("%u", &input_value);
	
	game1 = (Fight)input_value; //To input tou pelath , to kanw eidos Fight.
	//to static_cast einai idio me to aplo casting
	
	if (game1==Player1)
	   printf("Player 1 has won!\n");
	else if(game1==Player2)
	   printf("Player 2 has won!\n");
	else if(game1==Draw)
	   printf("Draw..\n"); 
	else
	   printf("Wrong input...\n");             
	
	system("PAUSE");
	return 0;
}

//me to enum prepei na grapsoume pali enum Fight kathe fora.An valoume typedef , den xreiazetai na ksanagrafoume enum
