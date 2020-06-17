lst = []
a = int(input("Enter the numbers of element : "))
for i in range(0,a):
    element = int(input("Enter the elements : "))
    lst.append(element)
b = int(input("Enter the divided table : "))
    
result = list(filter(lambda x : (x % b == 0) , lst))
print("The divided of ",b," is ",result)
