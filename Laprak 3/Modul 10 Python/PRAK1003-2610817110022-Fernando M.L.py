def total_addition(n):
    if n == 0:
        return 0
    return (n % 10) + total_addition(n // 10)

number = int(input())

if number == 0:
    total = 0
else:
    total = total_addition(number)

print(f"Jumlah digit dari {number} adalah {total}")