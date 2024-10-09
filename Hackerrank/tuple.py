if __name__ == '__main__':
    n = int(input())
    integer_list = map(int, input().split())
    int_list = list(integer_list)
    int_list_tup = tuple(int_list)
    print(hash(int_list_tup))
