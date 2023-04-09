l1=(126,48,109,121,51,91,31,112,127,115)
N=input("Enter: ")
temp=0b0000000
count=0
x=l1[int(N[0])]^temp
y=str(bin(x)[2:])
while (len(y)!=7):
    y='0'+y
for i in y:
    count=count+int(i)

if len(N)>1:
    for i in range(1,len(N)):
        x=x^l1[int(N[i])]
        y = str(bin(x)[2:])
        while (len(y) != 7):
            y = '0' + y
        for i in y:
            count = count + int(i)
print(count)

