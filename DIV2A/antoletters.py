dict={}
letters="abcdefghijklmnopqrstuvwxyz"
str=input()
for i in str:
    if i in letters:
        dict[i]=1
print(len(dict))