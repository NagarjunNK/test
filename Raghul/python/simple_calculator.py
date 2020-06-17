def add(x,y):
    return x + y
def sub(x,y):
    return x - y
def multi(x,y):
    return x * y
def div(x,y):
    return x / y
print("calculator option")
print("1.Addition")
print("2.Subraction")
print("3.multiplication")
print("4.division")
while True:
    choice = input("Enter the choice : ")
    if choice in ("1","2","3","4"):
        num1 = float(input("Enter the first value : "))
        num2 = float(input("Enter the second value : "))
        if choice == "1":
            print(num1,"+",num2,"=",add(num1,num2))
        if choice == "2":
            print(num1,"+",num2,"=",sub(num1,num2))
        if choice == "3":
            print(num1,"+",num2,"=",multi(num1,num2))
        if choice == "4":
            print(num1,"+",num2,"=",div(num1,num2))
        break
    else:
        print("Invalid choice")

