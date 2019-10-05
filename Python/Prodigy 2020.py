n = int(input())
notes = list(map(int, input().strip().split()))
stock = []
check_list = []
check = 0
change = 0
if n == 0:
    pass
else:
    for i in notes:
        if check == 0:
            stock.sort(reverse=True)
            check_list = stock.copy()
            change = i - 50
            if change == 0:
                stock.append(50)
            else:
                for j in stock:
                    if j<=change:
                        check_list.remove(j)
                        change = change-j
                    if change == 0:
                        stock = check_list.copy()
                        stock.append(i)
                        break
                if change!=0:
                    check = 1

if check == 0:
    print("YES")
else:
    print("NO")

total = sum(i for i in stock)
print(total)
