mydict = {'b': 2, 'a': 1, 'e': 5, 'd': 4, 'c': 3}
asc_dict = dict(sorted(mydict.items()))
print("Ascending Order = ", asc_dict)
des_dict = dict(sorted(mydict.items(), reverse=True))
print("Descending Order = ", des_dict)