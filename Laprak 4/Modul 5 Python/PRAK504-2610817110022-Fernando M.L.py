def reverse(r):
    reverse_number = int(str(r)[::-1])
    return reverse_number

A, B = map(int, input().split())
A = reverse(A)
B = reverse(B)
C = A + B
print(f"{reverse(C)}")