for _ in range(int(input())):
    n, k = map(int, input().strip().split(" "))
    list1 = list(map(int, input().strip().split(" ")))
    list1.sort(reverse=True)
    x = list1[k-1]
    counter=k-1
    while list1[counter]==x:
        counter=counter+1
        if counter==(n):
            break
    print(counter)