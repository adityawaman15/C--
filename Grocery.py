cart = []

def add_item():
    name = input("Item name: ")
    price = int(input("Price: "))
    qty = int(input("Quantity: "))
    cart.append((name, price, qty))

def show_bill():
    total = 0
    print("\nItem  Price  Qty  Total")
    for item in cart:
        item_total = item[1] * item[2]
        total += item_total
        print(item[0], item[1], item[2], item_total)
    print("Final Bill:", total)

while True:
    print("\n1.Add Item\n2.Show Bill\n3.Exit")
    choice = input("Choose: ")

    if choice == "1":
        add_item()
    elif choice == "2":
        show_bill()
    elif choice == "3":
        break
