for i in range(1, 6):
    number_1 = float(input(""))

    if number_1 > 99:
        print("Anda Menginput Melebihi Limit Bilangan")
    elif 11 > number_1 >= 1 : 
        print("satuan")
    elif 20 > number_1 >= 11: 
            print("belasan")
    elif number_1 >= 20: 
            print("puluhan")
    else:
        print("nol")
        
    print("")