for _ in range(int(input())):
    n = input()
    x = len(n)
    list1 = list(n)
    n = int(n)
    n1 = n
    count = list1.count("4")
    for i in list1:
        if count==0:
            break
        if i =='4':
            n1 = n1 - pow(10,x-1)*2
            x-=1
            count-=1
        elif i == "5":
            n1-=pow(10,x-1)*2
            x-=1
        elif i != "0":
            n1-=pow(10,x-1)
            x-=1
        else:
            x-=1
    print("Case #"+str(_+1)+": "+str(n1)+" "+str(n-n1))


