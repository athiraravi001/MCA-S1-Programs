class rectangle:
    def __init__(self,l,b):
        self.l=l
        self.b=b
    def area(self):
        return self.l*self.b
    def perimeter(self):
        return 2*(self.l+self.b)
    def compare(obj1,obj2):
        if obj1.area()==obj2.area():
            print("Both are equal")
        elif obj1.area()<obj2.area():
            print("Object1 is less than Object2")
        elif obj1.area()>obj2.area():
            print("Object1 is greater than Object2")
        else:
            print("These objects can't be compared")
l1=int(input("Enter length of first rectangle : "))
b1=int(input("Enter breadth of first rectangle : "))
l2=int(input("Enter length of second rectangle : "))
b2=int(input("Enter breadth of second rectangle : "))
obj1=rectangle(l1,b1)
obj2=rectangle(l2,b2)
print("Area of Rectangle1 = ",obj1.area())
print("Perimeter of Rectangle1 = ",obj1.perimeter())
print("Area of Rectangle2 = ",obj2.area())
print("Perimeter of Rectangle2 = ",obj2.perimeter())
obj1.compare(obj2)