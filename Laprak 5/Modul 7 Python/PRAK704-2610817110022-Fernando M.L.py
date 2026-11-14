word = input("")
if len(word) >= 20:
    word = word[:20] + '...'

print(f"{word}")