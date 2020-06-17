x = int(input('Enter the size of array: '))
arr = []
for i in range(x):
    arr.append(int(input('enter the values')))
print("the given list is ",arr)
highest = arr[0]
highest_index = 0
for i in range(0, x):
    if arr[i] > highest :
        highest = arr[i]
        highest_index = i
print("the highest values : " ,highest)
print("the position of the highest value is : " ,highest_index+1)   
lowest = arr[0]
lowest_index = 0
for i in range(0, x):
    if arr[i] < lowest :
        lowest = arr[i]
        lowest_index = i
print("the lowest values : " ,lowest)
print("the position of the lowest value is : " ,lowest_index+1)      
