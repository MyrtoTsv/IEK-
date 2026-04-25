lista = []

def reversedlista(lista):
    
    revlista = []
    
    for i in range(len(lista)-1, -1, -1):
        revlista.append(lista[i])
    return revlista

for i in range(5):
    num = float(input("Dwse mou enan arithmo: "))
    lista.append(num) 

    
print(reversedlista(lista))