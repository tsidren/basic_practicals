def binary_search(arr, x):
    low = 0
    high = len(arr) - 1

    while low <= high:
        mid = (high + low) // 2
        if arr[mid] < x:
            low = mid + 1
        elif arr[mid] > x:
            high = mid - 1
        else:
            return mid
    return -1


a = [2, 3, 4, 10, 40]
b = 10

result = binary_search(a, b)

if result != -1:
    print("Element is present at position: ", result+1)
else:
    print("Element is not present in array")
