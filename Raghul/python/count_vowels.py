vowels = 'aeiou'
word = input("Enter the string : ")
word = word.casefold()
count = {}.fromkeys(vowels,0)
for char in word:
    if char in  count:
        count[char] += 1
print(count)
