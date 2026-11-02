#Askhsh:Grapste mia klash Vechile(oxhma) me pedia to plithos twn rodwn kai thn marka
#Na exei:
#Kataskeuasth pou na arxikopoiei kai ta duo pedia 
#Mia methodo me onoma park pou na emfanizei ena munhma Parked!
#Mia methodo flatTyre opou tha meiwnei to plithos twn rodwn kata ena
#Mia methodo service opou tha auksanei to plithos twn rodwn meiwn ena
class Vehicle :
    def __init__(self,wheels,brand):
        self.wheels=wheels
        self.brand=brand

    def park(self):
        print("Parked!")

    def flatTyre(self): #den vazoume to wheels , giati h methodos kserei ta attributes , einai public.Tha vazame orisma mono an htan ektos ths klashs
        self.wheels=wheels - 1

    def service(self):
        self.wheels=wheels + 1

#Askhsh2:Grapste mia klash Vehicle me pedia me thn marka kai thn taxuthta kai mia methodo show_info() pou na emfanizei auta ta stoixeia
#Sthn sunexeia dhmiourghste mia klash Car h opoia klhronomei thn Vehicle.
#H Car prepei na exei ena epipleon pedio tis portes kai mia methodo honk() pou na emfanizei to munhma "Beep beep!"
#Dokimaste to programma dhmiourgwntas ena antikeimeno Car("Toyota",120,4)kai kalese tis methodous show_info() kai honk()

#Prostheste mia nea klash Bicycle pou klhronomei thn Vehicle .H Bicycle exei to extra attribute "type" kai mia methodo ring_bell()
#h opoia emfanizei to mynhma "Ring ring!"
#Dhmiourghste to antikeimeno Bicycle("Giant",25,"mountain") kai kaleste tis antistoixes methodous
class Vehicle:
    def __init__(self,brand,speed):
        self.speed=speed
        self.brand=brand

    def show_info(self):
        print(self.brand,self.speed)

#H klhronomhkothta einai gia epanaxrhsimopoihsh kwdika
#KLhronomei apo to Parent class ta attributes kai ta methods.Alla mporei na prosthesei dikes ths idiothtes.
class Car(Vehicle): #klhnoronomei apo thn klash Vehicle
    def __init__(self,brand,speed,doors):#Kouvalaei kai ta attirbutes tou vehicle
        super().__init__(brand,speed)#edw kaloume ton kataskeutasth ths uperklashs.Einai aparaithto to super(). Me to .,exoume access
        self.doors=doors

    def honk(self):
        print("Beep beep!")

    #Override edw, gia na tupwnei kai tis portes
    def show_info(self):
        print(self.brand,self.speed,self.doors)

class Bicycle(Vehicle):
    def __init__(self,brand,speed,type):
        super().__init__(brand,speed)
        self.type = type

    def ring_bell(self):
        print("Ring ring!")

    #Override edw, gia na tupwnei kai to type
    def show_info(self):
        print(self.brand,self.speed,self.type)

#Prostheste thn ElectricBicycle pou exei epipleon attribute thn diarkeia mpatarias
#Ara klhronomei apo to Bicycle , opou to Bicycle klhronomei apo to Vehicle , ara ta exei ola
class ElectricBicycle(Bicycle):
    def __init__(self,brand,speed,type,battery):
        super().__init__(brand,speed,type)
        self.battery=battery


c1 = Car("Toyota",120,4)
c1.show_info()
c1.honk()

b1 = Bicycle("Giant",25,"mountain")
b1.show_info()
b1.ring_bell()

#Override,exw mia methodo sthn uperklash,exw thn idia methodo kai stis upoklaseis , alla to periexomeno einai diaforetiko.
