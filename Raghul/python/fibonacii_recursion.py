def recur_fib(x):
    if x <= 1:
        return x
    else :
        return(recur_fib(x - 1) + recur_fib(x - 2))
a = int(input("Enter the value : "))
if a <= 0:
    print("Enter the proper number")
else:
    for i in range(a):
        print(recur_fib(i))
