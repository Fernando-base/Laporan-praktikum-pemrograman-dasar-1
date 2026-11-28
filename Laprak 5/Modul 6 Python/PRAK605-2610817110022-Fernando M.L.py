n = int(input())
print("Matriks A")
matrix_a = []
for i in range(n):
    row = list(map(int, input().split()))
    matrix_a.append(row)
print("Matriks B")
matrix_b = []
for i in range(n):
    row = list(map(int, input().split()))
    matrix_b.append(row)

hasil = [[0 for j in range(n)] for i in range(n)]

for i in range(n):                  
    for j in range(n):             
        for k in range(n):         
            hasil[i][j] += matrix_a[i][k] * matrix_b[k][j]

print("Matriks AXB")
for row in hasil:
    print(*row)
