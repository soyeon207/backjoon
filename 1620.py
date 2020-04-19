import sys
input = sys.stdin.readline

N,M = map(int,input().split())

pocketmon_name = []
pocketmon_index = {}

for i in range(N):
    inp = input().rstrip()
    pocketmon_name.append(inp)
    pocketmon_index[inp] = i+1
       
for j in range(M):
    MON = input().rstrip()
     
    if MON.isdigit() :
        print(pocketmon_name[int(MON)-1])
    else :
        print(pocketmon_index[MON])
