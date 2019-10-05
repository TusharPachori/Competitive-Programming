for _ in range(int(input())):
    test = [[0] * 10 for _ in range(10)]
    count = 0
    for i in range(10):
        for j in input().strip().split(" "):
            if int(j)<=30:
                count+=1

    if count >= 60:
        print("yes")
    else:
        print("no")
