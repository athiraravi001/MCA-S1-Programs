import statistics as s
list=[20,40,60,40,80,100]
print("Mean : ",s.mean(list))
print("Median : ",s.median(list))
print("Mode : ",s.mode(list))
print("Harmonic Mean : ",s.harmonic_mean(list))
print("Statistics Variance : ",s.variance(list))
print()
print(s.median_low([1,3,5,7,9,11,13]))
print(s.median_low([1,3,5,7,9,11]))
print(s.median_low([-11,5.5,-3.4,7.1,-9,22]))
