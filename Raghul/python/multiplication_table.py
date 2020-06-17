a = int(input("Enter the required multiplication table : "))
b = int(input("Enter the number of table values required : "))
if a <= 0:
    print("There is no multiplication table for", a)
else :
    for i in range(1 , b + 1):
        print(a,"x",i,"=", a * i)
