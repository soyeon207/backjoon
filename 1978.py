N = int(input())
count = 0
number = map(int, input().split())

for num in number:
    prime_number = False
    
    if num == 1:
        continue;

    for i in range(2,num):
        if num % i == 0:
            prime_number = True
            break;

    if prime_number == False:
        count+=1
    
print(count)
