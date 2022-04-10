def reverseWords(sentence):
    list = sentence.strip().split(' ')
    list.reverse()
    return list

print(reverseWords('             My name is Nabhag    '))