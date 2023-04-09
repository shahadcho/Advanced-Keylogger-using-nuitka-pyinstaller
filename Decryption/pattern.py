l=[]
l=[1,1,0,1,1,1]
count=0
j=0
k=len(l)
p=1

while (p<=k):
    for i in l:
        j=l[p]
        # print(j)
        p+=1
        if i == j:
            count+=1
    # j+= 1
    # if j<=k:
    #     if i==(l[j]):
    #         count+=1
print(count)