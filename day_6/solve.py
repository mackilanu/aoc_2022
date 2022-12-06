with open('data.in') as f:
    d = f.readline()
    for i in range(len(d)):
        if len(set(d[i:(i+4)])) == len(d[i:(i+4)]):
            print(i+4)
            exit(0)
        

