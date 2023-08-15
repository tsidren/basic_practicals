def search(arr, y):
    for i in range(len(arr)):
        if arr[i] == y:
            return i
    return -1


a = [1, 2, 3, 4, 5, 6, 7]
x = 4

if search(a, x) != -1:
    print(f"position of {x} is: ", search(a, x)+1)
else:
    print("element not found")
