lista = []

for i in range(5):
    num = float(input("Dwse mou enan arithmo: "))
    lista.append(num) 
    
counter=0

for num in lista:
    if num % 2 == 0:
     counter=counter+1
     
print("Oi artioi arithmoi ths listas einai: ",counter)
    
    