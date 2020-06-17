def factor_u(x):
    for i in range(1 , x + 1):
        if (x % i == 0):
            print(i)
a = int(input("Enter the value : "))
factor_u(a)
