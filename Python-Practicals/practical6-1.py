import math

def isPrime(number):
    for i in range(2,(int)(math.sqrt(number)) + 1):
        if number % i == 0:
            return False
    return True

number = (int)(input('Enter number:'))
print(isPrime(number))
