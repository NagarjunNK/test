a = int(input("Enter the value to be factorial : "))
factorial = 1
if a < 0:
    print("There is no factorial for ",a)
elif a == 0:
    print("The factorial value for", a ,"is 1")
else :
    for i in range(1 , a + 1):
        factorial = factorial * i
        print(factorial)
    print("The factorial for ",a,"is",factorial)    
