for _ in range(int(input())):
    n = int(input())
    route = input()
    route1 = list(route)
    route2 = list()

    for i in range(len(route1)):
        countE = route1[0:i+1].count("E")
        countS = route1[0:i+1].count("S")

        if route2.count("E") == countE and route2.count("S") == countS:
            if route1[i+1] == "E":
                route2.append("S")
            else:
                route2.append("E")

        else:
            if route1[i] == "E":
                route2.append("S")
            else:
                route2.append("E")

    print("Case #"+str(_+1)+": "+"".join(route2))



