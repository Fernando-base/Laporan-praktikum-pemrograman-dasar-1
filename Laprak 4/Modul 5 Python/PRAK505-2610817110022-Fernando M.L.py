def Biodata(a, b, c):
    tahun_sekarang = 2020
    age = tahun_sekarang - tahunLahir
    print(f"Perkenalkan Nama Saya : {a}")
    print(f"Umur Saya : {age}")
    print(f"Saya Adalah Angkatan : {b}")
    print(f"Asal Saya Dari : {c}")
    return a, b, c

tahunLahir = int(input())
Namaku = input("")
Asal = input("")
Biodata(tahunLahir, Namaku, Asal)