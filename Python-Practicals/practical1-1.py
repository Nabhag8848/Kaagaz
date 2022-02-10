from datetime import date

name = input('Enter Your Name:')
age = (int)(input('Enter Age:'))

current = date.today()
print('Your age will be 100 in year:',current.year + 100 - age)
