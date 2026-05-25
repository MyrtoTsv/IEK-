class BankAccount:
    def __init__(self,balance):
        self.balance = balance
#Apofeugoume ta munhmata stis sunarthseis ths klashs, den theloume na epikoinwnoume me ton
#xrthsth mesa sthm klash , mono mesa sthn main , giati prostateoume ta pedia ths klashs
    def deposit(self,amount):
        if(amount > 0):
            self.balance+=amount

    def show_balance(self):
        print(self.balance)


acc1 = BankAccount(360)
acc1.deposit(-500)
