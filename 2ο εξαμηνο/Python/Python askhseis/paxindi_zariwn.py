#Paixnidi zariwn.Duo paiktes tha rixnoun to zari tautoxrona otan o xrhsths pataei Enter
#Dyo tyxaioi arithmoi ekxwrountai sto zari tou kathe paikth kai tha nikaei ton gyro, autos me ton megalutero arithmo
import random

while True:
     input("Pathste enter")
     z1 = random.randint(1,6)
     print(z1)
     z2 = random.randint(1,6)
     print(z2)

     if z1 > z2:
          print("Nikhse to prwto zari")
     elif z2 > z1:
          print("Nikhse to deutero zari")
     else:
          print("Isopalia")