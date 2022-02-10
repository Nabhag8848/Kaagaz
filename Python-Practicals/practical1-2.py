number = (int)(input('Enter Number:'))

if number & 1:
    print('Number is Odd')
else:
    print('Number is Even')



number = (int)(input('Enter Number:'))

if (number % 4) == 0:
    print('Number is Multiple of 4')
else:
    print('Number is not Multiple of 4')




number = (int)(input('Enter Number:'))

if number < 0:
    print('Number is Negative')
elif number > 0:
    print('Number is Positive')
else: 
    print('Number is zero')


year = (int)(input('Enter Year:'))

if (year % 4) == 0 and (year % 100 == 0) or (year % 400 == 0):
    print('Leap Year')
else:
    print('Not a Leap Year')

    
