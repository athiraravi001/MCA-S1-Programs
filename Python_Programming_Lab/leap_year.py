def CheckLeap(year):  
  if((year % 400 == 0)or(year % 100 != 0)and(year % 4 == 0)):   
    print("Yes! This Year is a leap Year");   
  else:  
    print ("This Year is not a leap Year")  
year = int(input("Enter the year : "))  
CheckLeap(year)    