Multiples = int(input(""))
Symbol = input("")

for i in range(1, 51):
    if i % Multiples == 0:
        print(Symbol, end=" ")
    else:
        print(i, end=" ")
print()