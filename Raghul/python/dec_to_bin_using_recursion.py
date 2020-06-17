def tobin(x):
    strbin=''
    if x>1:
        tobin(x//2)
    print (x%2, end='')

num=int(input('enter a number : '))
tobin(num)
