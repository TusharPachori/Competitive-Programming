for _ in range(int(input())):
    n = int(input())
    list1 = list(map(int, input().strip().split()))
    day=0
    count=1
    while count<n:
        day=day+1
        count=count+sum(list1[0:count])

    print(day)