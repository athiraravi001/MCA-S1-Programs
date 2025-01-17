import csv
csvfile=open('student.csv','r',newline='')
obj=csv.reader(csvfile)
for row in obj:
    print(row)
    