import numpy
from numpy import random

arr1 = random.randint(10, size=(3, 4))
print("Array 1 is : ")
print(arr1)

arr2 = random.randint(10, size=(3, 4))
print("Array 2 is : ")
print(arr2)
print()

arr3 = numpy.concatenate((arr1, arr2), axis=1)
print("After Concatenate Array 1 and Array 2 resulting array is : ")
print(arr3)

newarr = numpy.flip(arr3)
print("Reversed 2D Array is : ")
print(newarr)
