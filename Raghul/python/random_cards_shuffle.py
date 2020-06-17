import itertools,random
cards = ['Spade','Clover','Heart','Diamond']
deck = list(itertools.product(range(1 , 14) , cards))
random.shuffle(deck)
total_cards = int(input("How many cards do you need : "))
print("The cards are : ")
for i in range(total_cards):
    print(deck[i][0]," is ",deck[i][1])
