str=input()
list=str.split("WUB")
res=""
for i in list:
    if i!="":
        res+=(i+" ")
print(res[:-1])