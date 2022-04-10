def binarySearch(list, target):
    start = 0
    end = len(list) - 1

    while start <= end:
        mid = int (start + (end - start) / 2)
        if list[mid] < target:
            start = mid + 1
        elif list[mid] > target:
            end = mid - 1
        else:
            return True

    return False


result = binarySearch([0, 1, 2, 2, 2, 2, 2, 2, 3, 4, 5, 6, 7, 8, 8, 10, 10, 11, 11, 11, 11, 11], 8)
print(result)
