//ifndef: if not already defined , ama den einai hdh dhlwmeno.Auth einai entolh tou preprossecor,(#) oxi tou compiler
//To vazoume se ifendif giati , meta apo to prwto object , tha paei na kanei sunexeia anllagh diavasmatos tou header kai ths classhs
//Ara , gia na mhn ginetai auto , na uparxei lag, ousiastika to header tha to kanoume wrap me ena ifendif
//Twra o kwdikas leei:An den einai hdh fortwmeno to header file (MyClass.h), tote fortwse to
//To MYCLASS_H sto ifnendif kai sto define,prepei na einai to idio giati milane gia to idio pragma
#ifndef MYCLASS_H
  //To define MYCLASS_H  shmainei:
  //phgaine kai ftiakse mou mia stathera MYCLASS kai thn stathera thn vazw sthn RAM.Auth h entolh tha meinei mesa sthn RAM
  
	#define MYCLASS_H
		class MyClass
		{
			private:
				string name;
				int value;
			
			public:
				void setName(string);
				void setValue(int);
				void setAll(string, int);
				string getName() const;
				int getValue() const;
				void print() const;
		};
#endif

