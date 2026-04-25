import random 

mystikos_arithmos = random.randint(1, 100)

prospatheies = 0
mantepsia = 0

print("Guess the number: ")


while mantepsia != mystikos_arithmos:
    mantepsia = int(input("Dwse thn provlepsh sou: "))
    prospatheies = prospatheies + 1  
    
    if mantepsia < mystikos_arithmos:
        print("Dwse megalutero arithmo.")
    elif mantepsia > mystikos_arithmos:
        print("Dwse mikrotero arithmo.")
    else:
        print("Vrhkes ton swsto arithmo se",prospatheies, "prospatheies")