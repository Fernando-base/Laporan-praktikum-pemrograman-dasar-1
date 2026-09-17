import math

base = 5
high = 12

side_A = high
side_C = base
side_B = int(math.sqrt(side_A**2 + side_C**2))

around = side_A + side_B + side_C
wide = int(0.5 * base * high)

print("Diketahui :")
print(f"Alas = {base} cm")
print(f"Tinggi = {high} cm\n")
print("Jawab :")
print(f"Sisi A = {side_A} cm")
print(f"Sisi B = {side_B} cm")
print(f"Sisi C = {side_C} cm")
print(f"Keliling = {around} cm")
print(f"Luas = {wide} cm")