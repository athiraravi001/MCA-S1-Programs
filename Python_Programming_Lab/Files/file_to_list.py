f=open("new.txt","r")
lines=[]
for line in f:
    lines.append(line.strip())
print(lines)
