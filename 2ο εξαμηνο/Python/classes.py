#Sthn python , den vazoume ta pedia mesa sthn klash , 
#ta vazoume mesa ston constructor
#O kataskeuasths legetai "__init__" kai oxi me to onoma ths klashs
#Sthn Python den ftiaxnoume setters kai getters , einai ola public den uparxei private
class Student:
    def __init__(self,name,age): #auta einai ta orismata pou vazoume ston constructor
        self.name=name #pedio , me ta pedia enooume attributes
        self.age=age #pedio
    def study():
        print("Me lene",self.name,"kai spoudazw")

s1=Student("Maria",20) #to self den to xrhsimopoume , to aggnooume
print(s1.name)
s1.age+=1
print(s1.age)
s2 = Student("Myrtw",24)
s2.study()
s1.study()
#Xreiazomai kataskeutasth giati dinei tis prwtes times ,arxikopoihsh kai dhmiourgei antikeimena
