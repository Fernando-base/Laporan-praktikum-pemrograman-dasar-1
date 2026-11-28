numbers = list(map(int, input().split()))

numbers.sort()
highest = max(numbers)
lowest = min(numbers)
average = sum(numbers) / len(numbers)

print("Nilai urut :", numbers)
print("Tertinggi :", highest)
print("Terendah :", lowest)
print(f"Rata-rata :{average: .2f}")