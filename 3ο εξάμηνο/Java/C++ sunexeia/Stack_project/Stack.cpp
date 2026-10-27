#include "Stack.h"

Stack::Stack()
{
	setTop(0);//arxikopoihsh tou arxikou deikth na deixnei sto 0 , katw katw.
	for (size_t i = 0; i<SIZE; i++)
		setStack('\0');  //Αρχικοποίησε τη στοίβα με τον τερματικό χαρακτήρα ενός αλφαριθμητικού

//to getTop,einai to top.Apla den vazoume kateutheian to top, gt to top einai private kai den exoume access.
//Mporoume na valoume se pedia pinaka [sunarthsh],afou kanei return mia timh,metavlhth.
void Stack::setStack(char temp)
{
	stack[getTop()] = temp;
}

void Stack::setTop(int top)
{
	this->top = top;
}

char Stack::getStack() const
{
	return stack[getTop()];
}

int Stack::getTop() const
{
	return top;
}
//Vazoume to pop gt kanoume paste.
void Stack::print()
{
	for(size_t i=0; i<strlen(stack); i++)
		cout<<pop()<<"'"<<endl;
}

void Stack::push(char ch)
{
	if(getTop()==SIZE)
		cerr<<"Cannot push '" << ch <<"'! Stack is FULL!\n\a";
	else
	{
		cout<<"'" << ch <<"' was pushed!\n";
		setStack(ch);
		setTop(getTop()+1);//Afou valame kati mesa sthn stoiva, metakinhse ton deikth +1.
	}
}
//h pop den einai san delete, einai san to paste.Gia auto einai sthn print ,gia thn kanoume show thn stack ,prepei na to kanoume "paste"
char Stack::pop()
{
	if(getTop()==0)
	{
		cerr<<"Cannot pop anything! Stack is EMPTY!\a";
		return '\0';  //Επίστρεψε τον τερματικό χαρακτήρα ενός αλφαριθμητικού
	}
	else
	{
		setTop(getTop()-1);//Afou vgalame kati apo thn stoiva , metakinhse ton deikth -1.
		cout<<"'"<<getStack() <<"' was popped!   --->   '";
		
		return getStack();
	}
}
