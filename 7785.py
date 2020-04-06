n = int(input())
result_names = dict()

for _ in range(n):
    name, enter_leave = map(str,input().split())

    if enter_leave == 'enter':
        result_names[name] = True
    else:
        del result_names[name]


print("\n".join(sorted(result_names.keys(), reverse=True)))
