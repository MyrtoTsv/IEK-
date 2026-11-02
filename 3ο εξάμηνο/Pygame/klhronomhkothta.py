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
