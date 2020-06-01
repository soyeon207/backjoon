x = []
y = []

for _ in range(3):
    m,n = map(int, input().split())

    if m in x:
        x.remove(m)
    else:
        x.append(m)

    if n in y:
        y.remove(n)
    else:
        y.append(n)

print(str(x[0])+" "+str(y[0]))
