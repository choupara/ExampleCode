def print_formatted(number):
    wid = number.bit_length()
    for num in range(1, number + 1):
        print(f"{num:>{wid}d} {num:>{wid}o} {num:>{wid}X} {num:>{wid}b}")

if __name__ == '__main__':
    n = int(input())
    print_formatted(n)