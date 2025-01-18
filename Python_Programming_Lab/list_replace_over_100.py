n = input("Enter a list of integers : ").split()
result = []
for num in n:
    if int(num) > 100: 
        result.append("over")
    else:
        result.append(num)
print(result)
