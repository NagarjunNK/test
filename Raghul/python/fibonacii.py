a = int(input("Enter the required : "))
n1 = 0
n2 = 1
o = 0
if a <= 0:
    print("The value for ",a,"is 0")
else :
    while o < a:
        print(n1)
        n = n1 + n2
        n1 = n2
        n2 = n
        o += 1
