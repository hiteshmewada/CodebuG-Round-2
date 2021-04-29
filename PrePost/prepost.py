def prepost(pre, N):
    pivotPoint = 0
    for i in range(1, N):
        # change below line to pass all test cases
        if (pre[0] >= pre[i]):
            pivotPoint= i
            break
    # change below line to pass all test cases
    for i in range(pivotPoint, 0, -1):
        print(pre[i], end = " ")
    
    for i in range(N - 1, pivotPoint - 1, -1):
        print(pre[i], end = " ")
    # change below line to pass all test cases
    print(pre[i])


if __name__ == '__main__':
    N = int(input().strip())
    pre = list(map(int, input().strip().split(' ')))
    prepost(pre, N)