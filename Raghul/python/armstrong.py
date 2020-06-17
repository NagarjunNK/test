a = int(input("Enter the value : "))
length = len(str(a))
summ = 0
temp = a
while temp > 0:
    d = temp % 10
    summ += d ** length
    temp //= 10
if a == summ :
    print(a," is an armstrong number")
else :
    print(a," is not an armstrong number")
        
