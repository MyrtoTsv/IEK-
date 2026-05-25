colors = ["red", "blue", "green"]
try:
    position = int(input("Enter a position(0, 1 or 2): "))
    print("The color is:", colors[position])

except ValueError:
    print("Error: The user hasn't given a number.")
except IndexError:
    print("Error: Index doesn't exist. Enter 0, 1 or 2.")
