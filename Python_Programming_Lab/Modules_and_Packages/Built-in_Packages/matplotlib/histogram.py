from matplotlib import pyplot as plt
population_age=[21,53,60,49,25,27,30,42,40,1,2,102,95,8,15,105]
bins=[0,10,20,30,40,50,60,70,80,90,100]
plt.hist(population_age,bins,histtype='bar',rwidth=0.8)
plt.xlabel('age groups')
plt.ylabel('Number of people')
plt.title('Histogram')
plt.show()