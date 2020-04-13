palindrome = []

while True:
    word = input()

    if word == '0':
        break;
    
    if word == str(word)[::-1]:
        palindrome.append('yes')
    else:
        palindrome.append('no')
            
    
for i in palindrome:
    print(i)
