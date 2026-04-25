lista = []

for i in range(5):
    num = float(input("Dwse mou enan arithmo: "))
    lista.append(num) 

sum = 0

for num in lista:
    sum = sum + num;

mo = sum / len(lista) #len(a) returns the count of elements in the list

print("O mesos oros twn stoixeiwn ths listas einai:",mo)