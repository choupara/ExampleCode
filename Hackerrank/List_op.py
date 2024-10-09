if __name__ == '__main__':
    N = int(input())
    info_list = []
    for i in range(N):
        s = list(input().split())
        if s[0]=='insert':
            info_list.insert(int(s[1]),int(s[2]))
        if s[0]=='remove':
            info_list.remove(int(s[1]))
        if s[0]=='append':
            info_list.append(int(s[1]))
        if s[0]=='sort':
            info_list.sort()
        if s[0]=='pop':
            info_list.pop()
        if s[0]=='reverse':
            info_list.reverse()     
        if s[0]=='print':
            print(info_list)
            
