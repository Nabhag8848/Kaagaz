import random

start = 0
end = 100
randomNumber = random.randint(start,end)
while True:
    number = (int)(input('Guess the Number: '))
    if number == randomNumber:
        print('You Guessed Correctly!')
        break
    elif number > randomNumber:
        print('Your Guessed Number is Greater than Actual')
    elif number < randomNumber:
        print('Your Guessed Number is Less than Actual')

    


while True:
    number = (int)(input('Guess the Number: '))
    if number == randomNumber:
        print('You Guessed Correctly!')
    elif number > randomNumber:
        print('Your Guessed Number is Greater than Actual')
    elif number < randomNumber:
        print('Your Guessed Number is Less than Actual')

    
    

    




