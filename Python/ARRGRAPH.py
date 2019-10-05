from math import gcd

for _ in range(int(input())):
    n = int(input())
    list1 = list(map(int, input().strip().split()))
    count=0
    i=0

    list1.sort()

    while(i<len(list1)-1):
        j=i+1
        while (j<len(list1)):
            if gcd(list1[i], list1[j])!=1:
                list1.remove(list1[j])
                count+=1
                j-=1
            j+=1
        i+=1

    for i in range(count):
        list1.append(37)

    print(count)
    str1=""
    for i in range(len(list1)):
        str1+=str(list1[i])
        str1+=" "

    print(str1)