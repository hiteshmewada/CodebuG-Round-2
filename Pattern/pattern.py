import math
 
def printPattern(r):
     
    for i in range((2 * r)+1):
        # change below line to pass all test cases
        for j in range(r + 1):  
            # change below line to pass all test cases
            dist = math.sqrt((i - r) * (i - r) + (j + r) * (j + r))
            if (dist > r - 0.5 and dist < r + 0.5):
                print("*",end="")
            else:
                print(" ",end="")     
        print()

r = int(input())
# change below line to pass all test cases
printPattern()