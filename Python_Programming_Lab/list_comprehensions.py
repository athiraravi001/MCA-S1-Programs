#Positive numbers from a list

list=[1,-2,3,-4,5,-6]
result=[num for num in list if num>=0]
print(result)

#Square of N numbers

num = [1, 2, 3, 4, 5]
square = [i**2 for i in num]
print("Squares = ", square)

#List of vowels from a word

word=input("Enter a word : ")
vowels="aeiouAEIOU"
vowel_list=[ch for ch in word if ch in vowels]
print("Vowels list = ",vowel_list)

#Ordinal value of each element of a word

word=input("Enter a word : ")
ordinal_values=[ord(ch) for ch in word]
print("Ordinal values = ",ordinal_values)