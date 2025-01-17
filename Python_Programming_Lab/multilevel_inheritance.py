class Publisher:
    def __init__(self,name):
        self.name=name
    def display(self):
        print("Name of the publisher : ",self.name)
class Book(Publisher):
    def __init__(self,name,title,author):
        Publisher.__init__(self,name)
        self.title=title
        self.author=author
    def display(self):
        print("Title of the book : ",self.title)
        print("Author of the book : ",self.author)
class Python(Book):
    def __init__(self,name,title,author,price,no_of_pages):
        Book.__init__(self,name,title,author)
        self.price=price
        self.no_of_pages=no_of_pages
    def display(self):
        Publisher.display(self)
        Book.display(self)
        print("Price of the book : ",self.price)
        print("Number of pages of the book : ",self.no_of_pages)
n=input("Enter name of publisher : ")
b=input("Enter title of the  book : ")
a=input("Enter author name : ")
p=int(input("Enter price : "))
pgs=int(input("Enter number of pages : "))
print("\n\n*****************************************\n\n")
p1=Python(n,b,a,p,pgs)
p1.display()