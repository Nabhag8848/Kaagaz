def intersection(list1,list2):

    ans = []
    i,j,k = 0, 0, 0

    while (i < len(list1)) and (j < len(list2)):
        if (list1[i] == list2[j]):
            ans.append(list1[i])
            i = i + 1
            j = j + 1
        elif (list1[i] < list2[j]):
            i = i + 1
        elif (list1[i] > list2[j]):
            j = j + 1


    return ans

def removeDuplicates(list):
    i = 0
    while(i < len(list) - 1):
        if (list[i] == list[i + 1]):
            list.pop(i + 1)
        else:
            i = i + 1

    return list



a = [1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89]
b = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13]
        
ans = intersection(a, b)
print(removeDuplicates(ans))
