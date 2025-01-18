from Graphics.rectangle import*
from Graphics.circle import*
from Graphics.threeDGraphics.cuboid import*
from Graphics.threeDGraphics.sphere import*
print("\n\n1 : RECTANGLE\n2 : CIRCLE\n3 : CUBOID\n4 : SPHERE\n5 : EXIT")
choice = input("Enter your choice : ")
while choice!=5:
    if choice == '1':
        l=int(input("Enter the length of rectangle : "))
        b=int(input("Enter the breadth of rectangle : "))
        print("Area of Rectangle = ",RectArea(l,b))
        print("Perimeter of Rectangle = ",RectPerimeter(l,b))
    elif choice == '2':
        r=int(input("Enter the radius of circle : "))
        print("Area of Circle = ",CirArea(r))
        print("Perimeter of Circle = ",CirPerimeter(r))
    elif choice == '3':
        l1=int(input("Enter the length of cuboid : "))
        b1=int(input("Enter the breadth of cuboid : "))
        h1=int(input("Enter the height of cuboid : "))
        print("Area of Cuboid = ",CubArea(l1,b1,h1))
        print("Perimeter of Cuboid = ",CubPerimeter(l1,b1,h1))
    elif choice == '4':
        r1=int(input("Enter the radius of sphere : "))
        print("Area of Sphere = ",SpArea(r1))
        print("Perimeter of Sphere = ",SpPerimeter(r1))
    elif choice =='5':
        print("EXITED")
        break
    else:
        print("Invalid choice")
    print("\n\n1 : RECTANGLE\n2 : CIRCLE\n3 : CUBOID\n4 : SPHERE\n5 : EXIT")
    choice = input("Enter your choice: ")
