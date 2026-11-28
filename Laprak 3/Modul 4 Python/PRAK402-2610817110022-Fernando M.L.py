limit = int(input(""))

for i in range(1, limit + 1, 2):
    print(i, end=" ")
print()

if limit % 2 == 0:
    odd = limit
else:
    odd = limit - 1

for i in range(odd, 1, -2):
    print(i, end=" ")
print()