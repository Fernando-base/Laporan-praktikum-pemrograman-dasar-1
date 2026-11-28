def minimum_step(n):
    if n == 1:
        return 1
    return 2 * minimum_step(n - 1) + 1 

n = int(input())

print(f"Jumlah langkah minimum untuk {n} cakram adalah {minimum_step(n)}")
