a,b = map(int, input("").split())
total = 0

for i in range(1, a + 1):
    total_line = 0
    for j in range(i, 0, -1):
        print(f"({j} * {b})", end="")
        if j > 1:                   
            print(" + ", end="")
        total_line += j * b
    print(f" = {total_line}")
    total += total_line

print(total) 