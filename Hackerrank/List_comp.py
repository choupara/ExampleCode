from itertools import permutations
if __name__ == '__main__':
    x = int(input())
    y = int(input())
    z = int(input())
    n = int(input())
    num_list = []
    
    for i in range(x+1):
        for j in range(y+1):
            for k in range (z+1):
                if i+j+k != n:
                    num_list.append([i,j,k])
    print(num_list)
