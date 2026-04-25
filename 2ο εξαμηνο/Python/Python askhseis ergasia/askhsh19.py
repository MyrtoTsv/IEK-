lista = []

def sunarthshlista(lista):
    
    athroisma = sum(lista) 
    return athroisma
    
    

for i in range(5):
    num = float(input("Dwse mou enan arithmo: "))
    lista.append(num) 

sum = sunarthshlista(lista)

print(sum)