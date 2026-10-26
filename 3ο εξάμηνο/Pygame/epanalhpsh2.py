#Grapste programma pou tha upologizei ton meso oro twn arithmwn
#apo to 20 mexri kai to 87.
sum = 0
count = 0
for i in range(20,88):
    sum = sum + i
    count = count + 1

print("O mesos oros twn stoixeiwn einai: ",sum/count)

#Askhsh me emvadon kuklou
import math
r = float(input("Dwse thn aktina enos kuklou: ")) #to input by default parmei panta string.Ara to kanoume cast se float.

E = (math.pi) * (math.pow(r,2))
P = 2 * (math.pi) * r

print("To emvadon einai:",E ,"kai h perimetros einai:",P)

#Sunarthseis
#1.emfanise apo to 1 ews to 50
def arithmoi():
    for i in range(1,51):
        print(i)

#klhsh ths sunarthshs
arithmoi() 

#2.
def greet(name):
    print("Hello ",name)

n = input("Dwse mou ena onoma: ")

greet(n)

#3.
def square(n):
    return n*n

a = square(4)
print (a)

#4. paragontiko
#1os tropos , me anadromh
def factorial(n):
    if n == 0 or n == 1:
        return 1
    else:
        return n * factorial(n-1)

num = int(input("Dwse enan arithmo: "))

print ("To paragontiko einai: ",factorial(num))
#2os tropos , me for
def factorial(n):
     if n == 0:
         return 1
     else:
        par = 1 # oxi 0 , giati ama valoume 0 me oti kai na poll/soume tha mhdenistei
        for i in range (1,n+1): #oxi sketo n , gt den tha parei to teleutaio pshfio
            par = par * i
        return par

num = int(input("Dwse enan arithmo: "))

print("To paragontiko einai: ",factorial(num))

#klasseis
class Logariasmos:
    def __init__(self,name,upoloipo):
        self.name=name
        self.upoloipo=upoloipo

    #h sunarthsh prepei panta na exei to self mesa
    def analhpsh(self,poso):
            if self.upoloipo >= poso:
                self.upoloipo -= poso

l1 = Logariasmos("Myrtw",320)
