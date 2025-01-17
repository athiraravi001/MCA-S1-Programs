n = int(input("Enter the number of terms : "))
n1, n2 = 0, 1
print("Fibonacci series = ", end=" ")
for i in range(n):
    print(n1, end=" ")
    temp = n1 + n2
    n1 = n2         
    n2 = temp      
