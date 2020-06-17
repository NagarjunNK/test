a = int(input("Enter the starting range of the value : "))
b = int(input("Enter the ending range of the value : "))
for num in range(a , b + 1):
    if num > 1:
        for i in range(2 , num//2 + 2):
            if (num % i) == 0 :
                break;
            else:
                if i == num//2 + 1:
                    print(num)
if a > b :
    print("ERROR")
