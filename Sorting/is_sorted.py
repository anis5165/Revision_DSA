def is_shorted(arr):
    sorted = True

    for i in range(len(arr)-1):
        if arr[i] > arr[i+1]:
            sorted = False

    return sorted


arr = [1,2,5,6,8,9,5]
print(is_shorted(arr))
