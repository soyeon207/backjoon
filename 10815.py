N = int(input())
N_CARD = set(map(int,input().split()))
M = int(input())
M_CARD = list(map(int,input().split()))

for i in M_CARD:
    if i in N_CARD:
        print(1,end = " ")
    else :
        print(0, end = " ")
