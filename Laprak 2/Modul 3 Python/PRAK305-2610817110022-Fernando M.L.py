for i in range (1, 6):
    total = int(float(input("")))

    second = total % 60
    total //= 60
    minute = total % 60
    total //= 60
    hour = total % 24
    day = total // 24

    if day > 0:
        print(f"{day} hari {hour:02}:{minute:02}:{second:02}")
    else:
        print(f"{hour:02}:{minute:02}:{second:02}")