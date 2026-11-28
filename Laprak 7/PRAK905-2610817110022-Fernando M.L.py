items = int(input())
stock = {}

for i in range(items):
    item, total = input().split()
    stock[item] = int(total)

sales = int(input())

for i in range(sales):
    item, sold = input().split()
    sold = int(sold)

    if item not in stock:
        print(f"Barang {item} tidak ada")
    elif stock[item] < sold:
        print(f"Stok {item} tidak cukup")
    else:
        stock[item] -= sold
        print(f"Terjual {item} {sold}, sisa {stock[item]}")

print(f"Stok akhir : {stock}")