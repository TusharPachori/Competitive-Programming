spaces =0
space=" "
counter=4
for i in range(1,6):
    spaces = 9-i
    print(space*counter, end="")
    for j in range(i):
        print(j+1, end=" ")
    print(space*counter, end="")
    print("")
    counter-=1