import random
#thn askhsh stis diafaneies me ton pinaka 5x5 na vrw to elaxisto
matrix = []

#Dhmiourgia pinaka 5x5 kai eisagwgh random stoixeiwn
for i in range(5): #gia tis grammes
    row = [] #ftiaxnoume tis grammes
    for j in range(5): #gia tis sthles
        row.append(random.randint(1,100)) #Vazoume tuxaies times
    matrix.append(row)

print(matrix)

for i in range(5):
    for j in range(5):
        if 


