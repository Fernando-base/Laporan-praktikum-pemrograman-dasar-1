ShoppingList = input().split(", ")
new_item = input()
bought = input()

ShoppingList.append(new_item)
if bought in ShoppingList:
    ShoppingList.remove(bought)
else:
    print(bought, "tidak ada di daftar")

print(f"\nDaftar belanja : {ShoppingList}")
print(f"Jumlah barang : {len(ShoppingList)}")