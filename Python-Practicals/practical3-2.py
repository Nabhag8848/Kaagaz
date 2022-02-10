string = input("Enter String: ")
i, j = 0, len(string) - 1

while i < j:
    if string[i] != string[j]:
        print('Not a Palindrome')
        break
    i = i + 1
    j = j - 1


if i == j: print('It is Palindrome')