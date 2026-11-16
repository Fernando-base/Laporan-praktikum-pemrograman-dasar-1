TotalRoom = int(input())
Zetsu = list(map(int, input().split()))
Total = []

for i in range(TotalRoom):
    RoomZetsu = i + 1
    TotalZetsu = Zetsu[i] * RoomZetsu
    Total.append(TotalZetsu)    

print(*Total)