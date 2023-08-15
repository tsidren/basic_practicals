import numpy as np


def mult(A, B, r1, c1, r2, c2):
    matrixx1 = np.array(A).reshape(r1, c1)
    matrixx2 = np.array(B).reshape(r2, c2)
    if c1 == r2:
        result = np.dot(matrixx1, matrixx2)
        print(result)
    else:
        print("multiplication not possible.")


Rows = int(input("Give the number of rows:"))
Columns = int(input("Give the number of columns:"))

print("Please write the elements of the matrix in a single line and separated by a space: ")
elements = list(map(int, input().split()))

Rows2 = int(input("Give the number of rows:"))
Columns2 = int(input("Give the number of columns:"))

print("Please write the elements of the matrix in a single line and separated by a space: ")
elements2 = list(map(int, input().split()))

mult(elements, elements2, Rows, Columns, Rows2, Columns2)
'''
Give the number of rows:3
Give the number of columns:3
Please write the elements of the matrix in a single line and separated by a space: 
12 7 31 4 5 6 7 8 9 
Give the number of rows:3
Give the number of columns:4
Please write the elements of the matrix in a single line and separated by a space: 
5 8 1 2 6 7 3 0 4 5 9 1
[[226 300 312  55]
 [ 74  97  73  14]
 [119 157 112  23]]
'''
"""
A = [[12, 7, 31], [4, 5, 6], [7, 8, 9]]

B = [[5, 8, 1, 2], [6, 7, 3, 0], [4, 5, 9, 1]]

result = np.dot(A, B)

print(result)
"""