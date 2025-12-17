#include <stdio.h>
#include <stdlib.h>
#include <string.h> //Gia strings.

#define STR_SIZE 256
int main(){
	
	char name1[STR_SIZE];
	char name2[STR_SIZE];
	char name3[STR_SIZE] = 'I love C11'; //to = epitrepetai mono kata thn dhlwsh
	char name4[2*STR_SIZE];
	char name5[STR_SIZE] = 'I hate C11';
	
	size_t number_of_keys; //dexetai mono thetikes times .To size_t , to xrhsimopoiw se metrhtes
	int comparison;
	
	comparison = strcmp(name3,name5);
	comparison = strncmp(name3,name5,2);//tha sugkrinei ta 2 prwta grammata
	
	if(comparison <0 ) //tha einai h-l
	    printf("%s < %s\n",name3,name5);
	else if(comparison > 0 ) //auto tha vgalei giati l-h einai megalutero.
	    printf("%s > %s\n",name3,name5);
	else if(comparison = 0 ) //einai idia
	    printf("%s < %s\n",name3,name5);
	
	printf("Dwse to onoma 1: ");
	//scanf("%s",name1); , lathos den douleuei
	gets(name1); //get string
	
	strcpy(name2,name1); // name1=name2
	strncpy(name2,name1 , 3); // name1=name2 ,tha mou antigrapseis ta tria prwta grammata tou enws sto allo.Auto isxuei mono gia ta prwta grammata,oxi teleutaia kai mesaia.
	
	number_of_keys = strlen(name1); //H strlne dinei ton arithmo twn plhktrwn tou string mazi me to space an uparxei
	number_of_keys = strnlen(name1 , 3); //Metra mou ta grammata,mexri to 3o , ton arithmo pou vazw
	
	printf("%s",strcat(name1,name3)); //String concatiante.Sunnenwnei duo strings.px Giannhs Xristos , tha ginei GiannhsXristos
	printf("%s",strncat(name1,name3,3))//Tha enwnseis ta 3 prwta grammata tou name3 sto name1
	
	strcpy(name4,strcat(name1,name3)); //name4 = strcat(name1,name3)
	printf("%s",name4);
	
	strcmp(s1,s2)//Dexteai duo strings , kai pairnei gramma gramma kai sugkrinei ta Ascii codes tous
	//As poume oti s1 Kwstas s2 Harley
	//To K einai 75 , to H einai 72 . 75-72 =3. An den vgei 0 , stamataei;
	//An vgei 0 , einai idia , paei sta epomena.An ola einai idia , kanei return 0;
	//Otan einai to ena megalutero , kanei return 1
	//Otan einai to ena mikrotero , kanei return -1
	
	printf("To \"%s\" exei %d plhktra",name1,number_of_keys);
	
	printf("\n\nOnoma: %s\n", name1);
	
	system("PAUSE");
	return 0;
}
