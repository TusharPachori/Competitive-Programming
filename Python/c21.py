unsort_arr = list(map(int, input("Enter unsorted array with space as  separation\n").strip().split()))
max_num = min_num = unsort_arr[0]

for i in range(len(unsort_arr)):
    if unsort_arr[i] > max_num:
        max_num = unsort_arr[i]
    if unsort_arr[i] < min_num:
        min_num = unsort_arr[i]

print("Minimum value in array is " + str(min_num) + "\nMaximum value in array is" + str(max_num))



