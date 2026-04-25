lista = []

def megalutero(lista):

    max = lista[0]

    for num in lista:
        if num > max:
            max = num
    return max

for i in range(5):
        num = float(input("Dwse mou enan arithmo: "))
        lista.append(num) 

print("To max einai: ",megalutero(lista))