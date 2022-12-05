def count_fully_contained_range_pairs(range_pairs):
    ranges = []
    for pair in range_pairs:
        # Parse each pair to create a Range object
        start, end = map(int, pair.split('-'))
        ranges.append(Range(start, end))

    # Count the number of pairs where one range fully contains the other
    count = 0
    for i in range(len(ranges)):
        for j in range(i + 1, len(ranges)):
            if ranges[i].is_fully_contained_in(ranges[j]):
                count += 1
            elif ranges[j].is_fully_contained_in(ranges[i]):
                count += 1

    return count


data = open('data.in').read();
