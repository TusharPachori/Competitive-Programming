for _ in range(int(input())):
    p1, p2, k = map(int, input().strip().split())
    points=p1+p2
    chance=points%(2*k)
    if(chance>=0 and chance<=k-1):
        print("CHEF")
    elif(chance>=k and chance<=(2*k-1)):
        print("COOK")