N, M = map(int, input().split())
card = list(map(int, input().split()))
card_len = len(card)

similar = 0;
su = 0;

for i in range(0,card_len):
    su = card[i];
    if su>M:
        continue;
    for j in range(i+1,card_len):
        su = card[i] + card[j]
        if su>M:
            continue;
        for k in range(j+1, card_len):
            su = card[i] + card[j] + card[k]
            if su>M:
                continue;
            
            if similar < su or similar == 0:
                similar = su;
            
print(similar)

    
    
