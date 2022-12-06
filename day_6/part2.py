with open('data.in') as f:
    d = f.readline()
    for i in range(len(d)):
        if len(set(d[i:(i+14)])) == len(d[i:(i+14)]):
            print(i+14)
            exit(0)