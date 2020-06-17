x = int(input("Enter the number of values : "))
arr = []
for i in range(x):
    arr.append(int(input("Enter the values : ")))
print("The given list is ",arr)
n = int(x/2)
highest = arr[0]
highest_index = 0
for i in range(n):
    if arr[i] > highest :
        highest = arr[i]
        highest_index = i
print('The highest values in first half is {}  and position is {} ' .format(highest,highest_index+1))
lowest = arr[0]
lowest_index = 0
for i in range(n):
    if arr[i] < lowest :
        lowest = arr[i]
        lowest_index = i
print('the lowest values in first half is {} and position is {}' .format(lowest,lowest_index+1))
highest = arr[0]
highest_index = 0
for i in range(n , x):
    if arr[i] > highest :
        highest = arr[i]
        highest_index = i
print('the highest values in second half is {} and position is {} ' .format(highest,highest_index+1))
lowest = arr[n]
lowest_index = 0
for i in range(n , x):
    if arr[i] < lowest :
        lowest = arr[i]
        lowest_index = i
print('The lowest values in second half is {} and position is {} ' .format(lowest,lowest_index+1))
   


