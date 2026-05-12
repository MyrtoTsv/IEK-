def dio_orismata(x,y):
    if x%2 == 0 and y%2 == 0:
        return True, True;
    elif x%2 == 0 and y%2 != 0:
        return True, False;
    elif x%2 != 0 and y%2 == 0:
        return False, True;
    else:
        return False, False;

or1, or2 = dio_orismata(1,6);

print(or1, or2);

myset = {"apple", "banana", "cherry"}
myset.add("orange")
print(myset)

