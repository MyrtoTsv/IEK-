//Ama grapsw ta input <iostream etc sthn CreateAndDestroy.cpp den xreiazetai na ta valw sthn main
//apo thn stigmh pou kanw include thn CreateAndDestroy.h sthn main
#include "CreateAndDestroy.h"

//H sunarthsh "create" , dhmiourgei tria dika ths objects
//Otan dhmiourgoume objects se mia sunarthsh , panta exei logikh LIFO,se stack sthn RAM, ara to teleutaio
//object tha skotwthei prwto
//Thn seira tou skotwmatos , mporei na thn allaksei an einai global h static ena object
void create()
{
	CreateAndDestroy fifth(5, "Local in create");
	static CreateAndDestroy sixth(6, "Static in create");
	CreateAndDestroy seventh(7, "Local in create");
}//edw kaleite prwth fora o destructor gia osa antikeimena uparxoun

//Auto einai global antikeimeno , katholiko antikeimeno , exoun oratotha oloi
//Einai global giati einai eksw apo thn emveleia ths main h kapoias sunarthshs
CreateAndDestroy first(1,"Global before main");


int main(void) 
{
	CreateAndDestroy second(2,"Local in main");
	static CreateAndDestroy third(3,"Static in main");
	create();
	CreateAndDestroy fourth(4,"Local in main");
	
	return 0;
}//edw ksanakaleite deuterh fora o destructor gia osa antikeimena uparxoun

//O destructor kaleite kathe fora pou kleinei h emveleia mias sunarthshs , eite main eite sunarthsh allh

