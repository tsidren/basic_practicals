def isprime(n):
    if n == 1 or n == 0:
        return False
    for i in range(2, n):
        if n % i == 0:
            return False
    return True


N = 100
for j in range(1, N + 1):
    if isprime(j):
        print(j, end=" ")
