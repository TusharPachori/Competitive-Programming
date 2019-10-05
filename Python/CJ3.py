for _ in range(int(input())):
    n, l = map(int, input().strip().split(" "))
    list1 = list(map(int, input().strip().split(" ")))
    list2 = list()
    list3 = list()

    for i in range(len(list1)):
        if n<list1[i]:
            x=n-1
        else:
            x=list1[i]-1
        while x>0:
            if list1[i] % x==0:
                break
            else:
                x-=1

        list2.append(x)
        list2.append(list1[i]//x)
        if len(list3)==0:
            list3.append([x, list1[i]//x])
        elif len(list3)==1:
            if x == list3[i-1][1]:
                list3.append([x, list1[i]//x])
            elif list1[i]//x == list3[i-1][1]:
                list3.append([list1[i]//x, x])
            else:
                temp = list3[i-1][0]
                list3[i-1][0]=list3[i-1][1]
                list3[i-1][1]=temp
                if x == list3[i - 1][1]:
                    list3.append([x, list1[i] // x])
                elif list1[i] // x == list3[i - 1][1]:
                    list3.append([list1[i] // x, x])
        else:
            if x == list3[i-1][1]:
                list3.append([x, list1[i]//x])
            elif list1[i]//x == list3[i-1][1]:
                list3.append([list1[i]//x, x])
    del list1
    list2 = set(list2)
    list2 = list(list2)
    list2.sort()

    code=list()

    for i in range(len(list3)):
        if i==0:
            code.append(chr(65+list2.index(list3[0][0])))
        code.append(chr(65 + list2.index(list3[i][1])))

    result = "".join(code)

    print("Case #"+str(_+1)+": "+result)


