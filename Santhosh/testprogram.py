import random
def hw():
    print("Hello world!")
def add():
    print("Two numbers:")
    b=int(input("1st num:"))
    c=int(input("2nd num:"))
    print("Add value:", b+c)
def squarert(d):
    return d**0.5
def area():
    b=int(input("Enter the base of the triangle:"))
    h=int(input("Enter the height of the triangle:"))
    print("Area of the triangle:",int((h*b)/2))
def leap():
    year=int(input("Enter year:"))
    print("\ncheck the year is leap year or not!!")
    if (year%4)==0:
        print("{}year is leap year".format(year))
    else:
        print("{}year is not leap year".format(year))
def quadratic():
    a=int(input("Enter the num a:"))
    b=int(input("Enter the num b:"))
    c=int(input("Enter the num c:"))
    print("Quadratic eqn is:{0}x^2+{1}x+{2}".format(a,b,c))
    e=int((b*b)-(4*a*c))
    sol1=int((-b+squarert(e))/2*a)
    sol2=int((-b-squarert(e))/2*a)
    print("The solution are ({0}+0j) and ({1}+0j)".format(sol1,sol2))

def swaping():
    print("Two numbers:")
    a=int(input("Enter the num a:"))
    b=int(input("Enter the num b:"))    
    print("before swaping..a,b={0},{1}".format(a,b))
    print("Swap two values:")
    a,b=b,a
    print("after swaping..a,b={0},{1}".format(a,b))
def ktm(m):
    return m*0.6213
def among(a,b,c):
    if a>b:
        if a>c:
            print("{} is greater".format(a))
        else:
            print("{} is greater".format(c))
    elif b>c:
        print("{} is greater".format(b))
    else:
        print("{} is greater".format(c))
def arms(a):
    b=a
    result=0
    while a>0:
        r=a%10
        result+=(r*r*r)
        a//=10    
    if b==result:
        print("{} is armstrong".format(b))
    else:
        print("{} is  not armstrong".format(b))
def prime(a):
    count=0
    for i in range(2,int(a)):
        if a%i==0:
            count=1
    if count==0:
        print("{}---- is prime number".format(a))
    else:
        print("{}---- not a prime number".format(a))
def fib(n):
    if n<=1:
        return n
    else:
        return (fib(n-2)+fib(n-1))

def fact(n):
    if n<=1:
        return 1
    else:
        return n*fact(n-1)
def armss(a):
    b=a
    c=1
    result=0
    while a>0:
        r=a%10
        result+=(r*r*r)
        a//=10    
    if b==result:
        print(b)

while 1:
    print("\n---------------------------")
    print("1.Hello world\n2.Add 2 num\n3.Square root\n4.Area of triangle\n5.quardic equation\n6.Swap 2 value\n7.generate random num\n8.Convert kilometre to mile\n9.Convert celcius to fahrenheit\n10.Check odd or even\n11.Check positive or negative")
    print("12.leap year not\n13.Greatest among three num\n14.Primenumber\n15.prime number interval\n16.factorial\n17.multiplication table\n18.fibonacci\n19.check armstrong\n20.armstrong number in interval")
    print("---------------------------\n")
    print("0 to exit:")
    a=int(input("\nEnter ur choice:"))
    if a==1:
        hw()
    elif a==2:
        add()
    elif a==3:
        d=int(input("Enter the num:"))
        print("square root of {0} is {1}".format(d,squarert(d)))
    elif a==4:
        area()
    elif a==5:
        quadratic()
    elif a==6:
        swaping()
    elif a==7:
        print("Random num between 1 to 10:",random.randrange(1,10))
    elif a==8:
        k=int(input("Enter the kilometre:"))
        print("convert {}kilometre to mile:{}".format(k,float(ktm(k))))
    elif a==9:
        celcius=float(input("Enter the celcius:"))
        fahrenheit=(celcius*1.8)+32
        print("%0.1f degree celcius eql to %0.1f degree fahrenheit"%(celcius,fahrenheit))
    elif a==11:
        x=int(input("Enter the num:"))
        if x==0:
            print("{} is zero".format(x))
        elif x>0:
            print("{} is positive".format(x))
        else:
            print("{} is negative".format(x))
    elif a==10:
        x=int(input("Enter the num:"))
        if x%2==0:
            print("{} is even num".format(x))
        else:	
            print("{} is odd num".format(x)) 
    elif a==12:
        leap()
    elif a==13:
        a=int(input("Enter the num a:"))
        b=int(input("Enter the num b:"))
        c=int(input("Enter the num c:"))
        among(a,b,c)
    elif a==14:
        a=int(input("Enter the num :"))
        prime(a)
    elif a==15:
        a=int(input("Enter the lower limit:"))
        b=int(input("Enter the upper limit:"))
        for i in range(a,b+1):
            prime(i)
    elif a==16:
        a=int(input("Enter the num:"))
        print("{}! is---{}".format(a,fact(a)))
    elif a==17:
        a=int(input("Which table u want..!:"))
        for i in range(1,17):
            print("{0} * {1} ={2}".format(i,a,i*a))
    elif a==18:
        a=int(input("Enter the num of series:"))
        for i in range(a):
             print(fib(i),end=" ")
    elif a==19:
        arm=int(input("Enter the num:"))
        print("Verify {} is armstrong or not..!".format(arm))
        arms(arm)
    elif a==20:
        a=int(input("Enter the lower limit:"))
        b=int(input("Enter the upper limit:"))
        for i in range(a,b+1):
            armss(i)
            
        
    else:
        exit(0)
    
