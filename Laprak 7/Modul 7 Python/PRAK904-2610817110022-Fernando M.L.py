items = int(input())
stock = {}

for i in range(items):
    item, total = input().split()
    stock[item] = int(total)

search = input()

print("\n")
for item, total in stock.items():
    print(f"{item} : {total}")

if search in stock:
    print(f"Stok {search} saat ini : {stock[search]}")
else:
    print(f"Barang {search} tidak ada di gudang")