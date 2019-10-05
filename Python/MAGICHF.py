for _ in range(int(input())):
    n, x, s = map(int, input().strip().split())
    a = [[0] * 2 for i in range(s)]
    print(a)
    for i in range(s):
        a[i] = [int(j) for j in input().strip().split(" ")]
    for i in range(s):
        if a[i][0]==x:
            x=a[i][1]
        elif a[i][1]==x:
            x=a[i][0]
    print(x)
