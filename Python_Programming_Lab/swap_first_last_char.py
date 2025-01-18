str = input("Enter a string : ")
first_char = str[0]
last_char = str[-1]
middle_part = str[1:-1]
new_str = last_char + middle_part + first_char
print("New string : ", new_str)
