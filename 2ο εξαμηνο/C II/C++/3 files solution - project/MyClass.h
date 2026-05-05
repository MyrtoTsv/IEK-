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
          //private kanoume ta attributes
			private:
				string name;
				int value;
		 //public kanoume tis methodous
			public:
		//Yparxoun 7 anti 6 methodoi,h 7h einai h methodos tou contructor pou einai by default kai einia aorath auth thn stigmh
		//H method tou constructor , gennaei mesa sthn Ram , ena antikeimeno, to kanei construct , dhmiourghma
		//H c++ xrhsimopoiei ton diko ths ton constructor, to default.
	    //1.to onoma tou constructor , prepei upoxrewtika na einai to idio onoma me thn klash
        //2.o constructor prepei na einai void , na mhn epistrefei tipota, den exei pote o constructor return type
        //Ton constructor , den mporw na ton kalesw sthn main , "kaleitai" mono otan ftiaxnw antikeimena

				MyClass(); //default constructor einai void
				MyClass(string,int);//custom constructor , einai na vazw mesa ston construcotr , tis dikes mas times.
				void setName(string);
				void setValue(int);
				void setAll(string, int);
				string getName() const;
				int getValue() const;
				void print() const;
		};
#endif

//Default constructor : Na paei mesa sthn name kai na orisiei arxikes times
