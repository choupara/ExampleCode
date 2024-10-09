if __name__ == '__main__':
    inp = int(input())
    name = []
    score = []
    final = []
    for _ in range(inp):
        name.append(input())
        score.append(float(input()))
    sorted_score = sorted(set(score))
    sec_min = sorted_score[1]
    
    
    for idx,i in enumerate(score):
        if sec_min == i:
            final.append((name[idx]))
    final.sort()
    for i in final:
        print(i)
