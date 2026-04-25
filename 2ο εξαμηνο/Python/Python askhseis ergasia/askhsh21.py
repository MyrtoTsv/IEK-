def paragontiko(x):
    if x == 0 or x == 1:
        return 1
    else:
        return x * paragontiko(x-1)

num = int(input("Dwse enan arithmo: "))

print ("To paragontiko einai: ",paragontiko(num))