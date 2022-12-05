def overlaps(x, y):
    f, t =  int(x.split('-')[0]), int(x.split('-')[1])
    f1, t1 =  int(y.split('-')[0]), int(y.split('-')[1])
    return max(f,f1) <= min(t,t1)

tot = 0
with open('data.in') as f:
    r = [x.strip() for x in f.readlines()]
    pairs = [x.split(',') for x in r]
    for pair in pairs:
        if overlaps(pair[0], pair[1]):
            tot += 1

print(tot)