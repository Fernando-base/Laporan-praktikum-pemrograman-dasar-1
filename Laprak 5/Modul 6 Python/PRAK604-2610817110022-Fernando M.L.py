code = str(input())
message = str(input())
total = ""

if len(code) != len(message):
    print("Panjang kalimat berbeda, pesan palsu")
    quit()
else: 
    for i in range(len(code)):
        if str(message[i]) == str(code[i]):
            total += "*"
        else:
            total += "#"

print(total)

total_star = 0
total_kres = 0

for char in total:
    if char == "*":
        total_star += 1
    elif char == "#":
        total_kres += 1

print(f"* = {total_star}")
print(f"# = {total_kres}")

if total_star >= total_kres:
    print("Pesan asli")
else:
    print("Pesan palsu")    