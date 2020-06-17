def recur_nat(n):
    if n <= 1:
        return n
    else:
        return n + recur_nat(n - 1)
num = int(input("Enter the natural number : "))
print("The sum of natural number ",recur_nat(num))
