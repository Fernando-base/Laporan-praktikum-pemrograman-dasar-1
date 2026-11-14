row, column = map(int, input().split())
number = list(map(int, input().split()))

for i in range(row):
    row_data = number[i * column:(i + 1) * column]
    print(*row_data)
