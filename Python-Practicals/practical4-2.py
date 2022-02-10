from xmlrpc.client import Boolean


player1 = ''
player2 = ''
flag = False
while True:

    player1 = input('Rock, Paper, Scissors: ')
    player2 = input('Rock, Paper, Scissors: ')
    player1 = player1.lower()
    player2 = player2.lower()

    if (player1 == player2):
        print('Tie')
    elif player1 == 'rock' and player2 == 'scissor':
        print('player1')
    elif (player1 == 'scissor' and player2 == 'rock'):
        print('player2')
    elif (player1 == 'rock' and player2 == 'paper'):
        print('player2')
    elif(player1 == 'paper' and player2 == 'rock'):
        print('player1')
    elif(player1 == 'scissor' and player2 == 'paper'):
        print('player1')
    elif(player1 == 'paper' and player2 == 'scissor'):
        print('player2')

    flag = input('You need to continue Playing: ')
    flag.lower()

    if(flag == 'no' or flag != 'yes'):
        break

