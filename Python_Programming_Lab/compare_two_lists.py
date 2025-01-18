l1=[1,2,3,4]
l2=[3,4,5,6]

#Lists are of same length

if len(l1)==len(l2):
    print("Lists are of same length")
else:
    print("Lists are of different length")

#Sums of lists are equal

if sum(l1)==sum(l2):
    print("Sum of the two list are equal")
else:
    print("Sum of the two list are different")

#Common values in lists

common_values=set(l1)&set(l2)
if common_values:
    print("Common values : ",common_values)
else:
    print("No common elements found")
