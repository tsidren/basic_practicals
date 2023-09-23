from collections import defaultdict


visited = defaultdict(lambda: False)


def waterJugSolver(amt1, amt2, step):
    if visited[(amt1, amt2)] == False:
        if step == 0:
            print("initial value: ", end="")
        if step == 1:
            print("empty A:       ", end="")
        if step == 2:
            print("empty B:       ", end="")
        if step == 3:
            print("fill A:        ", end="")
        if step == 4:
            print("fill B:        ", end="")
        if step == 5:
            print("pour B to A:   ", end="")
        if step == 6:
            print("pour A to B:   ", end="")


        print(amt1, '', amt2)

        visited[(amt1, amt2)] = True
        return (waterJugSolver(0, amt2, 1) or waterJugSolver(amt1, 0, 2) or waterJugSolver(jug1, amt2, 3) or
                waterJugSolver(amt1, jug2, 4) or
                waterJugSolver(amt1 + min(amt2, (jug1 - amt1)), amt2 - min(amt2, (jug1 - amt1)), 5) or
                waterJugSolver(amt1 - min(amt1, (jug2 - amt2)), amt2 + min(amt1, (jug2 - amt2)), 6))

    if amt1 == aim and amt2 == 0:
        print("capacity achieved!! water jug A has: ", amt1, ' units ')
        return True
    if amt2 == aim and amt1 == 0:
        print("capacity achieved!! water jug B has: ", amt2, 'units')
        return True
    else:
        return False


print("created by Shivanshu.")
print("roll: 2100971520048")
print("program no:3, water jug problem.\n")


jug1 = int(input("enter the capacity of jug A: "))
jug2 = int(input("enter the capacity of jug B: "))
aim = int(input("enter the capacity you want to measure: "))

# jug1, jug2, aim = 3, 5, 4
# jug1, jug2, aim = 4, 3, 2

print("               A  B")
print("Steps:")
waterJugSolver(0, 0, 0)
