def solution(statues):
    min_val = min(statues)
    max_val = max(statues)
    count = 0
    for i in range(min_val, max_val):
        if i not in statues:
            count += 1
    
    return count
