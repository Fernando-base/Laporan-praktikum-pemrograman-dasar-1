radius = float(input(""))
height = float(input(""))
phi = 22 / 7

volume = phi * (radius * radius) * height
area =  2 * phi * radius * (radius + height)
circumference = 2 * phi * radius

rounded_volume = round(volume, 2)
rounded_area = round(area, 2)
rounded_circumference = round(circumference, 2)

print(f"Volume = {rounded_volume: .2f}")
print(f"Luas = {rounded_area: .2f}")
print(f"Keliling = {rounded_circumference: .2f}\n")

radius, height = map(float, input("").split())
phi = 22 / 7

volume = phi * (radius * radius) * height
area =  2 * phi * radius * (radius + height)
circumference = 2 * phi * radius

rounded_volume = round(volume, 2)
rounded_area = round(area, 2)
rounded_circumference = round(circumference, 2)

print(f"Volume = {rounded_volume: .2f}")
print(f"Luas = {rounded_area: .2f}")
print(f"Keliling = {rounded_circumference: .2f}")