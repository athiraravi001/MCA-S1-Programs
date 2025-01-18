names=["Alice","Bob","Cruz","Ariz","David"]
count=0
for name in names:
    count+=name.lower().count('a')
print("Occurences of 'a's : ",count)