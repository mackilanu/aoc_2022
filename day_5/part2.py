with open('data.in') as f:
    d = f.readlines()
    start = [
        list(['G', 'P', 'N', 'R']), list(['H', 'V', 'S', 'C', 'L', 'B', 'J', 'T']), list(['L', 'N', 'M', 'B', 'D', 'T']),
        list(['B', 'S', 'P', 'V', 'R']), list(['H', 'V', 'M', 'W', 'S', 'Q', 'C', 'G']), list(['J', 'B', 'D', 'C', 'S', 'Q', 'W']),
        list(['L', 'Q', 'F']), list(['V', 'F', 'L', 'D', 'T', 'H', 'M', 'W']), list(['F', 'J', 'M', 'V', 'B', 'P', 'L'])
    ]
    for row in d:
        num_crates, move_from_crate, to_crate = int(row.split()[1]), int(row.split()[3])-1, int(row.split()[5])-1
        start[to_crate] = start[move_from_crate][:num_crates] + start[to_crate]
        start[move_from_crate] = start[move_from_crate][num_crates:]

for i in start:
    print(i[0], end="")
print('\n')