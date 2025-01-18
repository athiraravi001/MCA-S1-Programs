import csv
cars=[{'No':1,'Company':'Ferrari','Model':'488GTB'},{'No':2,'Company':'BMW','Model':'BMWX7'},{'No':3,'Company':'Porsche','Model':'918spyder'}]
csvfile=open('Car.csv','w')
field_names=list(cars[0].keys())
writer=csv.DictWriter(csvfile,fieldnames=field_names)
writer.writeheader()
writer.writerows(cars)
csvfile.close()
csv_file=open('Car.csv','r')
csv_reader=csv.reader(csv_file)
for line in csv_file:
    print(line,end="")
csv_file.close()
