a = int(input("Enter the starting range : "))
b = int(input("Enter the ending range : "))


for i in range(a , b + 1):
    length = len(str(i))
    summ = 0
    temp = i
    while temp > 0:
        d = temp % 10
        summ += d ** length
        temp //= 10
    if i == summ :
        print(i," is an armstrong number and its count is ",length)

    
