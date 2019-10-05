m = int(input())
points = list(map(int, input().strip().split()))
n = int(input())
gain_points = list(map(int, input().strip().split()))
oz_points = sum(i for i in gain_points)
points.append(oz_points)
points.sort(reverse=True)

counter = 1
last = -1

for i in points:
    if i!=last:
        if i == oz_points:
            print(counter)
            break
        elif i > oz_points:
            counter += 1
        last = i
