remix=input()
start=0
prev=0
count=remix.count("WUB",start)
res=""
if(count):
    start=remix.index("WUB",start)
else:
    print(remix)
res=remix[prev:start]
while(count):
    prev=start+3
    count=remix.count("WUB",start+3)
    start=remix.index("WUB",start+3)
    res=res+" "+remix[prev:start]
print(remix)
