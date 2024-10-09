def swap_case(s):
    string = s.swapcase()
    return string

if __name__ == '__main__':
    s = input()
    result = swap_case(s)
    print(result)