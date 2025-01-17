import math
def even_perfect(lower, upper):
    result = []
    for num in range(int(math.sqrt(lower)), int(math.sqrt(upper)) + 1):
        square = num * num
        if 1000 <= square <= 9999:
            if all(int(digit) % 2 == 0 for digit in str(square)):
                result.append(square)
    return result
lower = 1000
upper = 9999
print("Result = ", even_perfect(lower, upper))