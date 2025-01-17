class bank:
    def __init__(self):
        self.balance=0
    def deposit(self):
        amount=int(input("Enter the amount to deposit : "))
        self.balance=self.balance+amount
        print("Amount deposited : ",amount)
    def withdraw(self):
        amount=int(input("Enter the amount to withdraw : "))
        if self.balance>=amount:
            self.balance=self.balance-amount
            print("You withdrew:",amount)
        else:
            print("Insufficient balance")
    def display(self):
        print("Net available balance = ",self.balance)
name=input("Enter name of account holder : ")
accno=int(input("Enter account number : "))
acctype=input("Enter account type(Saving /Current) : ")
bank_obj=bank()
while(True):
    print("\n1 : DEPOSIT MONEY\n2 : WITHDRAW MONEY\n3 : DISPLAY\n4 : EXIT")
    ch=int(input("Enter your choice : "))
    if(ch==1):
        bank_obj.deposit()
        bank_obj.display()
    elif(ch==2):
        bank_obj.withdraw()
        bank_obj.display()
    elif(ch==3):
        bank_obj.display()
    elif(ch==4):
        print("EXITED")
        break
    else:
        print("Invalid choice")
        
    