list1 = list(map(int, input("Enter list with space as  separation\n").strip().split()))

sum = int(input("Enter the sum"))

list2 = []

for i in range(len(list1)):
    for j in list1[i+1:]:
        if list1[i]+j == sum:
            if (list1[i],j) not in list2 or (j,list1[i]) not in list2:
                list2.append((list1[i],j))

print(str(len(list2)) + " Pairs with sum " + str(sum) + " are " + str(list2))



