def fibonacciNumber(n):
    list = []
    
    list.append(0)
    if n == 1:
        return list
    list.append(1)
    if n == 2:  
        return list
     
    for i in range(2,n + 1):
        list.append(list[len(list) - 1] + list[len(list) - 2])
    return list

print(fibonacciNumber(10))
