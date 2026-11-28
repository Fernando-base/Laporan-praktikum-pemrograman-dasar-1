while True:
  print("\nPilih Program")
  print("1.Penjumlahan")
  print("2.Pengurangan")
  print("3.Perkalian")
  print("4.Pembagian")
  print("5.Exit")

  choice = input("Masukkan Pilihan: ")

  if choice == "1":
    a = float(input("Masukkan Nilai Pertama: "))
    b = float(input("Masukkan Nilai Kedua: "))
    print(f"Hasil perjumlahan antara{a: .2f} dan{b: .2f} adalah{a + b: .2f}")
  elif choice == "2":
    a = float(input("Masukkan Nilai Pertama: "))
    b = float(input("Masukkan Nilai Kedua: "))
    print(f"Hasil pengurangan antara{a: .2f} dan{b: .2f} adalah{a - b: .2f}")
  elif choice == "3":
    a = float(input("Masukkan Nilai Pertama: "))
    b = float(input("Masukkan Nilai Kedua: "))
    print(f"Hasil perkalian antara{a: .2f} dan{b: .2f} adalah{a * b: .2f}")
  elif choice == "4":
    a = float(input("Masukkan Nilai Pertama: "))
    b = float(input("Masukkan Nilai Kedua: "))
    print(f"Hasil pembagian antara{a: .2f} dan{b: .2f} adalah{a / b: .2f}")
  elif choice == "5":
    print(f"Terimakasih, telah menggunakan kalkulator NANDO")
    break
  else:
    print("Input anda salah, silahkan coba lagi")
