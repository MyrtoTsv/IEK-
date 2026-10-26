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
import math
def square(n):
    print(math.pow(n,2))

num = float(input("Dwse mou enan arithmo: "))

square(num)
