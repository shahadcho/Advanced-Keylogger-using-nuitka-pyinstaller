dict={'1':'bc','2':'abged','3':'abgcd','4':'fgbc','5':'afgcd','6':'fedcg','7':'abc','8':'abcdefg','9':'afgbc'}
list = ['1','3','5']
list2 = []
list3 = dict[list[0]]
len=len(list3)+1
# print(list3)
count = 0
char = ''
cm = ''

for num in list:
    char = dict[num]
    print("current char is",char)
    # print(char)
    for i in char:
        if any((match :=subs) in list3 for subs in i):
            # count += 1
            print(match,"= present")
        else:
            count += 1
            print(match,"= not present")
            list3+=match
            print("adding one...")


    for i in char:
        if any((match :=subs) in i for subs in list3):
            # count += 1
            print(match,"= present")
        else:
            count += 1
            print(match,"= not present")

            print("adding one...")

print("Final count = ",count+len)



