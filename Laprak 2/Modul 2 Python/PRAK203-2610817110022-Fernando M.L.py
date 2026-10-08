a, b, i, j, x, y = map(float, input("").split())

total = (a - b) * i / j - (x + y)
print(f"{total: .3f}\n")

a, b = map(float, input("").split())
i, j = map(float, input("").split())
x, y = map(float, input("").split())

total = (a - b) * i / j - (x + y)
print(f"{total: .3f}")