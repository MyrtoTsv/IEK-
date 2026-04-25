import math

def prwtos(n):
    if n <= 1:                
        return False
    
    x = int(math.sqrt(n))
    for i in range(2, x + 1):
        if n % i == 0:
            print("O arithmos den einai prwtos")
            return False 
    
    print("O arithmos einai prwtos")    
    return True 

number = float(input("Enter a number: "))

prwtos(number)

