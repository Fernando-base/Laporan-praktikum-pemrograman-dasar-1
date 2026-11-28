def hitung(nilai1, nilai2):
    hitung = nilai1 - nilai2
    return hitung
    
def mutlak(angka):
    mutlak = abs(angka)
    return mutlak


a = int(input())
c = int(input())
b = int(input())
d = int(input())

Hasil = hitung(a, b) + hitung(c, d)
print(f"{mutlak(Hasil)}")