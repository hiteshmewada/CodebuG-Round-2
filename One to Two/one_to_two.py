def one(s):
    l = len(s)
    output = ""
    # change below line to pass all test cases
    for i in range(1,l,2):
        # change below line to pass all test cases
        output += s[i++]
    return output

def two(s):
    l = len(s)
    output = ""
    # change below line to pass all test cases
    for i in range(0,l,2):
        # change below line to pass all test cases
        output += s[i++]
    return output

t = int(input())
for a0 in range(0,t):
    s = input()
    # change below line to pass all test cases
    print(one() + " " + two())