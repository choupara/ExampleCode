import textwrap

def wrap(string, max_width):
    new = textwrap.wrap(string,max_width)
    op = "\n".join(new)
    return op

if __name__ == '__main__':
    string, max_width = input(), int(input())
    result = wrap(string, max_width)
    print(result)