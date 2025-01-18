from matplotlib import pyplot as plt
players='Rohit','Virat','Shikhar','Yuvraj'
runs=[45,30,15,10]
explode=(0.1,0,0,0)
fig1,ax1=plt.subplots()
ax1.pie(runs,explode=explode,labels=players,autopct='%1.1f%%',shadow=True,startangle=90)
ax1.axis('equal')
plt.title('Pie Chart')
plt.show()

