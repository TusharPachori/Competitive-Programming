for _ in range(int(input())):
    n,m,x,y = map(int, input().strip().split())
    p=1
    k=1
    while(n-p>=x):
        p+=x
    while(m-k>=y):
        k+=y

    if (p == n and k == m) or (p+1 == n and k+1 == m):
        print("Chefirnemo")
    elif x==1 and m-k==1 and p!=1:
        print("Chefirnemo")
    elif y==1 and n-p==1 and k!=1:
        print("Chefirnemo")
    else:
        print("Pofik")