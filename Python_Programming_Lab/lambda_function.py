a=int(input("Enter the side of square : "))
square=lambda a:a*a
print("Area of square = ",square(a))
print("\n----------------------------------------------------------\n")
l=int(input("Enter the length of rectangle : "))
b=int(input("Enter the width of rectangle : "))
rectangle=lambda l,b:l*b
print("Area of rectangle = ",rectangle(l,b))
print("\n----------------------------------------------------------\n")
b=int(input("Enter the base of triangle : "))
h=int(input("Enter the height of triangle : "))
triangle=lambda b,h:0.5*b*h
print("Area of rectangle = ",triangle(b,h))
