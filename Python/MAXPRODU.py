def combo2(lst,n):
    if n==0:
        return [[]]
    l=[]
    for i in range(0,len(lst)):
        m=lst[i]
        remLst=lst[i+1:]
        for p in combo2(remLst,n-1):
            l.append([m]+p)
    return l

for _ in range(int(input())):
    n, k = map(int, input().strip().split())
    list1 = list(range(1,n))
    comb = combo2(list1,k)
    list2=[]
    res=0
    for i in comb:
        if sum(i) == n:
            const = 1
            for j in i:
                const*=j*j-j
                #print(const)
            if res<const:
                res=const

    print(res)

