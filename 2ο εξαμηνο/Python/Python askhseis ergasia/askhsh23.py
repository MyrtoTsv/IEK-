n = int(input("Dwse mou enan arithmo; "))

print("Oi prwtoi arithmoi einai:")

for arithmos in range(2, n + 1):
    einai_protos = True  #leitourgei san flag
    
    for d in range(2, arithmos):
        if arithmos % d == 0:  
            einai_protos = False 
            break               
            
    if einai_protos == True:
        print(arithmos)