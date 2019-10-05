for _ in range(int(input())):
    n = int(input())
    count = []
    a=-1
    b=-1
    test = list(map(int, input().strip().split(" ")))
    a = max(test)
    check = 0
    countmax = 0
    countmin = 0
    for i in test:
        if i==a:
            countmax+=1
        elif i==a-1:
            countmin+=1
        else:
            check=1

    if check==1:
        print("-1")
    else:
        if countmax+countmin != n:
            print("-1")
        elif a ==n-1 and countmax == n:
            print(countmin)
        else:
            if countmin == a:
                print(countmax)
            else:
                print("-1")


