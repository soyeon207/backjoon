while True:
    xyz = list(map(int, input().split()));

    m = max(xyz);
    
    if m == 0:
        break;

    xyz.remove(m);

    if pow(xyz[0],2) + pow(xyz[1],2) == pow(m,2):
        print("right")
    else:
        print("wrong")
