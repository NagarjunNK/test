def gcd_value(x , y):
    if x > y:
        small = y
    else:
        small = x
    for i in range(1 , small + 1):
        if ((x % i == 0) and (y % i == 0)):
            gcd = i
    return gcd    
a = int(input("Enter the value : "))
b = int(input("Enter the value : "))
print( gcd_value(a,b),"is the gcd value")
lcm = (a * b) / gcd_value(a,b)
print(lcm," is the lcm value")
