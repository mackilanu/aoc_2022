def contains(x, y):
    f, t =  x.split('-')[0], x.split('-')[1]
    f1, t1 =  y.split('-')[0], y.split('-')[1]
    return int(f) >= int(f1) and int(t) <= int(t1)

tot = 0
with open('data.in') as f:
    r = [x.strip() for x in f.readlines()]
    pairs = [x.split(',') for x in r]
    for pair in pairs:
        if contains(pair[0], pair[1]) or contains(pair[1], pair[0]):
            tot += 1

print(tot)
