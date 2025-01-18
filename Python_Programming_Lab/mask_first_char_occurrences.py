str=input("Enter a string : ")
ch=str[0]
new_str=ch+str[1:].replace(ch,'$')
print(new_str)