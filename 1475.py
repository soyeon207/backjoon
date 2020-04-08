N = list(input())

number = [0 for _ in range(10)]

number[6] = 0.5

for i in N:
    if i=='6' or i=='9':
        number[6] += 0.5
    else:
        number[int(i)] += 1

print (int(max(number)))
