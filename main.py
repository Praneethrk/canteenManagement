def verify_user(sno):
    fhand = open("user.txt", "r")
    data = fhand.read()
    records = data.split('$')
    for record in records:
        items = record.split('|')
        no = items[2]

        if(no == sno):
            print("\nUser Already Exits\nPlease Login\n")
            return 0

def create_user():
    print("\n\n\n\t\t\tMITE CANTEEN MANAGEMENT\n")
    print("\nCustomer Information\n")
    name = input("Name: ")
    eno = input("ENo.: ")
    phone = input("Phone: ")
    password = input("Password:")
    v = verify_user(eno)
    if v != 0:
        fhand = open("serial.txt", "r")
        service_number = int(fhand.read())
        fhand.close()
        fhand = open("serial.txt", "w")
        fhand.write(str(service_number+1))
        fhand.close()

        fhand = open("user.txt", "a+")
        buf = str(service_number) +"|"+ name +"|"+ eno +"|"+ phone +"|"+ password +"$"

        fhand.write(buf)

def order(sno):
    fhand = open("menu.txt", "r")
    data = fhand.read()
    fhand.close()
    records = data.split("$")
    for record in records:
        attributes = record.split('|')
        for attribute in attributes:
            print(attribute, '\t\t\t\t\t\t\t\t', end="")
        print("\n")
    filename = sno + ".txt"
    fp = open("menu.txt",'r')
    data = fp.read()
    records = data.split('$')
    del records[-1]
    while(1):
        print("press Q when done.")
        ch = (input("Enter your choice:"))
        if(ch == 'q' or ch == 'Q'):
                return 0
        fhand = open(filename,"a+")
        q = int(input("Enter the Quantity:"))
        
        for record in records:
            items = record.split('|')
            num = items[0]
            name = items[1]
            prize = items[2]
            if(num == ch):
                buf = str(name) +"|"+ str(prize)+ "|" + str(q) + "$" 
                fhand.write(buf)


def cancel_order(sno):
    flag = 0
    item = input("Enter item to delete : ")
    item = item.upper()
    temp =list()
    filename = sno +".txt"
    fhand = open(filename, "r")
    data = fhand.read()
    fhand.close()
    records = data.split('$')
    for record in records:
        if record.startswith(item):
            flag = 1
            continue
        else:
            temp.append(record)
    del temp[-1]
    if flag == 1:
        print("Item canceled Successfully")
    else:
        print("Item not Found")


    fhand = open(filename, "w")
    for record in temp:
        fhand.write(record)
        fhand.write('$')

def display_bill(sno):
    total = 0
    filename = sno +".txt"
    fhand = open(filename, "r")
    data = fhand.read()
    if not data.startswith('*'):
        print("Dish\tPrize\tQuantity\n")
        records = data.split('$')
        del records[-1]
        for record in records:
            items = record.split('|')
            name = items[0]
            prize = int(items[1])
            quan = int(items[2])

            total = total + (prize * quan)
            for attribute in items:
                print(attribute, '\t', end="")
            print('\n')
            # total = str(total)
        print("\tTotal: ",total)
        print("Thank You !! ")
    
    


def menu(sno):
    q = False
    while not q:
        print("\n\n\n\t\t\tMITE CANTEEN MANAGEMENT\n")
        choice = int(input(
            "----------MENU----------\n1.Order!\n2.Cancel ordered item\n3.Done!\n4.EXIT\nPlease Enter a Choice: "))
        
        if(choice == 1):
            order(sno)

        elif(choice == 2):
            cancel_order(sno)

            
        elif(choice == 3):
            display_bill(sno)

        else:
            return

def login_user():
    service_no = input("Enter your Service no:")
    pass_no = input("Enter your Password:")
    fhand = open("user.txt", "r")
    data = fhand.read()
    records = data.split('$')
    for record in records:
        items = record.split('|')
        sno = items[0]
        password = items[4]


        if(service_no == sno):
            if(pass_no == password):
                print("\nLogin Successful\n")
                menu(sno)
        else:
            print("\nIncorrect Service no. or password\n")
            break

def display_item():
    fhand = open("inventory.txt", "r")
    data = fhand.read()
    records = data.split("$")
    for record in records:
        attributes = record.split('|')
        for attribute in attributes:
            print(attribute, '\t', end="")
        print('\n')
    



def main():

    q = False
    while not q:
        print("\n\n\n\t\t\tMITE CANTEEN MANAGEMENT\n")
        choice = int(input(
            "----------MENU----------\n1. Login\n2.New User\n3.EXIT\nPlease Enter a Choice: "))
        
        if(choice == 1):
            login_user()

        elif(choice == 2):
            create_user()

        else:
            return
        

if __name__ == "__main__":
    main()
