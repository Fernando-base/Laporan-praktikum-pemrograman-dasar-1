number_destination = int(input())

goals = []  

for i in range(number_destination):
    data = tuple(input().split())
    goals.append(data)

print("\n")
for i in goals:
    print(f"{i[0]}: lintang {i[1]}, bujur {i[2]}")

first = goals[0]
print(f"Tujuan pertama: ('{first[0]}', {first[1]}, {first[2]})")