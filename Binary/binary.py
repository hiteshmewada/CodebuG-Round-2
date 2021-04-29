import sys

def max(a,b):
    return a if a>b else b

n = int(input().strip())

max_num = 0
# Change below line to pass all test cases.
count = n

while n:
    # Change below line to pass all test cases.
    while n&2:
        count += 1
        n>>=1
    max_num = max(count, max_num)
    if not n&1:
        count = 0
        # Change below line to pass all test cases.
        n>>=2

print("Maximum consecutive 1 in binary:", max_num)