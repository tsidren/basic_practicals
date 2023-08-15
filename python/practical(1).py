r'''
cd to this file's address  cd D:\up\python\praticals
then >>>       python praticals(1).py 1 2 3 4 5 6
OUTPUT:
Total arguments passed:  7

Name of Python script: practical(1).py

Arguments passed:  2 3 4 5 6 7

sun of arguments:  27

 maximum in inputs:  7

 minimum in inputs:  2
.........................................................................................
 and this comment has an 'r' as prefix
 because it helps resolving an error:
SyntaxError: (unicode error) 'unicodeescape' codec can't decode bytes in position 33-34: truncated \uXXXX escape
.........................................................................................
so to create it as a raw string, meaning interpreter will treat ''' ''' as literal characters.
'''


import sys

n = len(sys.argv)
print("Total arguments passed: ", n)

print("\nName of Python script:", sys.argv[0])

print("\nArguments passed: ", end=" ")

for i in range(1, n):
    print(sys.argv[i], end=" ")

Sum = 0
for i in range(1, n):
    Sum += int(sys.argv[i])

a = []
print("\n\nsun of arguments: ", Sum)
for i in range(1, n):
    a.append(sys.argv[i])

maxi = max(a)
mini = min(a)

print("\n maximum in inputs: ", maxi)
print("\n minimum in inputs: ", mini)
