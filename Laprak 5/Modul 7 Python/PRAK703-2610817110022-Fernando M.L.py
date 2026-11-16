word = input("Kalimat: ")

jumlah_vokal = 0
jumlah_konsonan = 0

for huruf in word:
    if huruf.lower() in "aiueo":
        jumlah_vokal += 1
    elif huruf.isalpha():
        jumlah_konsonan += 1

print(f"Jumlah Vokal: {jumlah_vokal}")
print(f"Jumlah Konsonan: {jumlah_konsonan}")