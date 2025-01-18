class Salesman:
    def __init__(self):
        self.__name = input("Enter the name : ")
        self.__place = input("Enter the place : ")
        self.__salesamount = int(input("Enter the sales amount : "))
        self.__commission = 0
    def commission(self):
        if self.__salesamount < 2000:
            self.__commission = (8 * self.__salesamount) / 100
        elif self.__salesamount >= 2000 and self.__salesamount <= 5000:
            self.__commission = (self.__salesamount / 100) / 10
        elif self.__salesamount > 5000:
            self.__commission = (self.__salesamount / 100) / 12
    def display(self):
        print("Name = ", self.__name)
        print("Place = ", self.__place)
        print("Sales amount = ", self.__salesamount)
        print("Commission =", self.__commission)
print("********Enter the details of 1st salesman********")
s1 = Salesman()
s1.display()
s1.commission()
print("\n********Enter the details of 2nd salesman********")
s2 = Salesman()
s2.display()
s2.commission()
print("\n********Enter the details of 3rd salesman********")
s3 = Salesman()
s3.display()
s3.commission()
