my_str = input("Enter the string : ")
my_str = my_str.casefold()
rev_str = reversed(my_str)
if list(my_str) == list(rev_str):
    print(my_str," is palindrom ")
else:
    print(my_str," is not palindrom ")
