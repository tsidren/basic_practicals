def squareroot(n, l):
    x = n


    while True:
        root = 0.5 * (x + (n / x))
        if abs(root - x) < l:
            break
        x = root
        # print("[", root, "], ", end=" ")
    return round(root, 16)

# b = 144
b = int(input("enter the number: "))
e = 0.00001
# print( a)
print(squareroot(b, e))
# print('%.16f' % squareroot(b, e))
