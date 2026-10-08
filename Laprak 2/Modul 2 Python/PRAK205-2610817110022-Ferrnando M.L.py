import math

A, B = map(float, input("").split())

side_A = A
side_B = B

side_C = math.sqrt(side_B ** 2 - side_A ** 2)
around = side_A + side_B + side_C
wide = int(0.5 * side_C * side_A)

print(f"Alas ={side_C: .0f} cm")
print(f"Tinggi ={side_A: .0f} cm")
print(f"Keliling ={around: .0f} cm")
print(f"Luas ={wide: .0f} cm^2\n")

A = float(input(""))
B = float(input(""))

side_A = A
side_B = B

side_C = math.sqrt(side_B ** 2 - side_A ** 2)
around = side_A + side_B + side_C
wide = int(0.5 * side_C * side_A)

print(f"Alas ={side_C: .0f} cm")
print(f"Tinggi ={side_A: .0f} cm")
print(f"Keliling ={around: .0f} cm")
print(f"Luas ={wide: .0f} cm^2")