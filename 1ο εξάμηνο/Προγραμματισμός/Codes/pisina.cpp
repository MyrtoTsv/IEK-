#include <stdio.h>
#include <stdlib.h>

int main(){
	system("CHCP 1253 > nul");
	
	float mhkos;
	float platos;
	float ipsos;
	float emvadon,ogkos;
   
	//ôï number å÷åé áðïèçêåõôåé óôçí ìíçìç ñáì
 
 	printf("Äþóå ìïõ ôï ìÞêïò , ôï ðëÜôïò êéá ôï ýøïò ðïõ èá Þèåëåò íá Ý÷åé ç ðéóßíá \n");
 	scanf("%f %f %f", &mhkos , &platos ,&ipsos); //óôçí äéåèõíóç ðïõ õðáñ÷åé óôçí ñáì
 	
 	emvadon = platos*mhkos;
 	ogkos = mhkos*ipsos*platos;
 	
 	printf("Ôá ôåôñáãùíéêá ìåôñá ìå ðëáêáêé ðïõ ðñåðåé íá ìðïõí óôïí ðõèìåíá ôçò ðéóéíáò åéíáé: %.2lf ôåôñáãùíéêá ìåôñá\n",emvadon);
 	printf("Ï üãêïò ôïõ íåñïý ðïõ ÷ùñÜåé ïëüêëçñç ç ðéóßíá åßíáé: %.2lf êõâéêá ìåôñá\n",ogkos);
 	
	system ("PAUSE");
	return 0;
}
