def suffix(word):
    if word.endswith('ing'):
        return word+'ly'
    else:
        return word+'ing'
word=input("Enter a string : ")
result=suffix(word)
print(result)