from functools import reduce


def lcm(denominators):
    return reduce(lambda x,y: (lambda a,b: next(i for i in range(max(a,b),a*b+1) if i%a==0 and i%b==0))(x,y), denominators)


for _ in range(int(input())):
    n = int(input())
    test = list(map(int, input().strip().split(" ")))
    s, l = map(int, input().strip().split(" "))
    maxmul = lcm(test)
    check=0
    for i in range(s, l+1):
        if i%maxmul!=0:
            check+=1
    print(check)