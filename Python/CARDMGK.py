for _ in range(int(input())):
    n = int(input())
    list1 = list(map(int, input().strip().split()))
    sorted=1
    for i in range(len(list1)-1):
        if list1[i]>list1[i+1]:
            sorted=0
            break
    if sorted==1:
        print("YES")
    else:
        list2=list1[i+1:]+list1[:i+1]

        sorted=1
        for j in range(len(list2)-1):
            if list2[j]>list2[j+1]:
                sorted=0
                break

        if sorted==1:
            print("YES")
        else:
            print("NO")