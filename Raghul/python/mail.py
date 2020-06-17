class certificate:
    def __init__(self, name, addr, mail):
        self.name = name
        self.addr = addr
        self.mail = mail


list = []
a = int(input("Enter the number of person : "))

for i in range(a):
    list.append( certificate(name = input("Enter the name : "),addr = input("Enter the address : "),mail = input("Enter the mail id : ")) )


for j in list:
    print("Hi ",j.name)
    print("your mail ID ",j.mail)
    print(" i will sent your certificate to your address ",j.addr )
