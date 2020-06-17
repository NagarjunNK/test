a = int(input("Enter the number of rows for 1st matrix : "))
b = int(input("Enter the number of columns for 1st matrix : "))
q = int(input("Enter the number of rows for 2nd matrix : "))
w = int(input("Enter the number of columns for 2nd matrix : "))
if b == q:
    x = []
    y = []
    print("The first  matrix ")
    for i in range(0 , a):
        f = []
        for j in range(0 , b):
            f.append(int(input()))
        x.append(f)
    for i in range(a):
        for j in range(b):
            print(x[i] [j],end = ' ')
        print()    

    print("The second matrix ")
    for i in range(0 , q):
        g = []
        for j in range(0 , w):
            g.append(int(input()))
        y.append(g)

    for i in range(q):
        for j in range(w):
            print(y[i] [j],end = ' ')
        print()
    result = [[0 for x in range(a)] for y in range(b)]
    for i in range(a):
        for j in range(len(x[0])):
            for k in range(w):
                result[i][j] += x[i][k] * y[k][j]
    print("The multiplication of two matrix is ")
    for r in result:
        print(r)    
else:
    print("Give the correct rows and columns")
    
    
