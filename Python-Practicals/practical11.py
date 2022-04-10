class Error(Exception):
    pass
class ValueToSmallError(Error):
    pass
class ValueTooLargeError(Error):
    pass

number = 45

while True: 
    try: 
        num = int(input('Enter a Number: '))
        if num < number:
            raise ValueToSmallError
        elif num > number:
            raise ValueTooLargeError
        break
    except ValueToSmallError:
        print('Too Small Value!')
        print()
    except ValueTooLargeError:
        print('Too Large Value!')
        print()

print('Wow! You guessed it.') 