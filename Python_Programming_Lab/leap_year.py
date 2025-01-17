c_year=int(input("Enter the current year : "))
f_year=int(input("Enter the final year : "))
for year in range(c_year,f_year+1):
    if(year%4==0 and year%100!=0 or year%400==0):
        print(year)