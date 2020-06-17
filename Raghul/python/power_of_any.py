a = int(input("Enter the number powers required : "))
b = int(input("Enter the number to be powered : "))
result = list(map(lambda x: b ** x, range(a)))
for i in range(0 , a):
    print(b,"The power of ",i," is ",result[i])
    
