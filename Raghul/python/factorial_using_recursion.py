def recur_nat(n):
    if n == 1:
        return n
    else:
        return n * recur_nat(n - 1)
num = int(input("Enter the number : "))
if num < 0:
    print(num," has no factorial value")
elif num == 1:
    print("The factorial value for ",num," is 1")
else :   
    print("The factorial number of ",num," is ",recur_nat(num))
