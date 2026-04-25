lista = []

for i in range(5):
    num = float(input("Dwse mou enan arithmo: "))
    lista.append(num) 

max = lista[0]

for num in lista:
    if num > max:
        max = num

print("O megistos arithmos einai: ",max)