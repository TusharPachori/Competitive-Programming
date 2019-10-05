list1 = list(map(int, input().strip().split()))
list2 = list(map(int, input().strip().split()))

dict={}
list1.extend(list2)
num = 0

for i in list1:
    if i in dict:
        num = dict[i]
        dict[i] = num+1
    else:
        dict[i] = 1

for i in dict:
    if dict[i] %2 != 0:
        print(i)
        break
