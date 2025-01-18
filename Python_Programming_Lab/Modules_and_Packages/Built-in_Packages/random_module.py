import random
mylist=['Ann','Ben','Ciril','Deril','Ariz','Cruz']
print(random.choice(mylist))
print(random.choices(mylist,k=4))
print(random.sample(mylist,k=2))
random.shuffle(mylist)
print(mylist)
print(random.randrange(1,1000))