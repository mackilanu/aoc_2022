print(max([sum(list(map(int,line.split()))) for line in open('data.in').read().split('\n\n')]))

