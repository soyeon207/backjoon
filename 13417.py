T = int(input())

for _ in range(T):
    N = int(input())
    card = list(map(str,input().split()))

    result = card[0]

    for i in range(1,len(card)):
        if card[i] > result[0]:
            result+=card[i]
        else:
            result = card[i]+result
    
    print(result)
