a = int(input("Dwse enan arithmo apo 0-100: "))

if a  >= 0 and a <= 49:
    print("Aneparkws")
elif a >=50 and a <=69:
    print("Kalws")
elif a >=70 and a <=89:
    print("Polu Kala")
elif a >=90 and a <=100:
    print("Arista")
else:
    print("Lathos arithmo")

a = int(input("Dwse enan thetiko akeraio: "))
sum = 0
if a > 0:
        for i in range(a+1):
            sum = sum + i
else:
      print("Edwses lathos arithmo")

print(sum)
