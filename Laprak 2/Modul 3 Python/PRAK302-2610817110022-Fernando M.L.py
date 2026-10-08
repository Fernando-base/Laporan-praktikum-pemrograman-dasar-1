for i in range(1, 6):
    number_1 = float(input(""))

    if number_1 >= 80:
        print("A")
    elif 79 >= number_1 >= 70:
        print("B")
    elif 69 >= number_1 >= 60:
        print("C")
    elif 59 >= number_1 >= 50:
        print("D")
    elif number_1 < 50:
        print("E")
        
    print() 