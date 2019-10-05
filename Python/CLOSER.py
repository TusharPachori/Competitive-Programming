import math

numbers = list(map(int, input().strip().split()))

sum_digit = sum(i for i in numbers)

a = int(math.sqrt(sum_digit)+0.5)

if a ==0:
    a =1

new_sum = a*a
diff = new_sum - sum_digit

rep_dig = numbers[0]
rep_dig = rep_dig + diff
numbers[0] = rep_dig

for i in numbers:
    print(i, end=" ")
