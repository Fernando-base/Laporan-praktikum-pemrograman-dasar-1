word = input("")
result = word[::-1]

if word == result:
    print(f"Kata {word} adalah palindrom")
else:
    print(f"Kata {word} bukan palindrom")