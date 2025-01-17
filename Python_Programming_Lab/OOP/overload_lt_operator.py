class Rectangle:
    def __init__(self):
        self.__l=int(input("Enter the length : "))
        self.__b=int(input("Enter the breadth : "))
    def __lt__(obj1,obj2):
        area1=obj1.__l*obj1.__b
        area2=obj2.__l*obj2.__b
        print("Area of rectangle1 is : ",area1)
        print("Area of rectangle2 is : ",area2)
        return area1<area2
print("***Enter length & breadth of first object***")
obj1=Rectangle()
print("***Enter length & breadth of second object***")
obj2=Rectangle()
if obj1<obj2:
    print("Rectangle1 is less than Rectangle2")
else:
    print("Rectangle1 is greater than Rectangle2")