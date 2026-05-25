class Car:
    def __init__(self,brand,year):
        self.brand = brand
        self.year = year
    
    def __str__(self):
        return "Car:" + self.brand + " " + "Year:"+ str(self.year)

car1=Car("Nissan",1995)
print(car1)
car2=Car("BMW",2003)
print(car2)
