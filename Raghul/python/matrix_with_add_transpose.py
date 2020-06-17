a = int(input("Enter the number of rows : "))
b = int(input("Enter the number of columns : "))
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
for i in range(0 , a):
    g = []
    for j in range(0 , b):
        g.append(int(input()))
    y.append(g)

for i in range(a):
    for j in range(b):
        print(y[i] [j],end = ' ')
    print()
result = [[0 for x in range(a)] for y in range(b)]
for i in range(a):
   for j in range(len(x[0])):
       result[i][j] = x[i][j] + y[i][j]
print("The addition of two matrix is ")       
for r in result:
   print(r)
z = [[0 for x in range(a)] for y in range(b)]  
for i in range(a):
    for j in range(b):
        z[i][j] = x[j][i]
print("The transpose is ")        
for i in z:
    print(i)
