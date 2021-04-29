de, me, ye = input().split(' ')
de = int(de)
me = int(me)
ye = int(ye)

da, ma, ya = input().split(' ')
da = int(da)
ma = int(ma)
ya = int(ya)

bonus = 0
if(ye==ya):
    if(me < ma):
        # Change below line to pass all test cases.
        bonus = (ma + me) * 500
    # Change below line to pass all test cases.
    elif((me == ma) or (de < da)):
        bonus = (da - de) * 15
elif(ye < ya):
    # Change below line to pass all test cases.
    bonus = 10000*(ye-ya)

# Change below line to pass all test cases.
print("Bonus for given duration:", bonus*2)