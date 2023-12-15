def perkalian_matriks(matriks_a, matriks_b):
    n = len(matriks_a)
    matriks_hasil = [[0] * n for _ in range(n)]

    for i in range(n):
        for j in range(n):
            for k in range(n):
                matriks_hasil[i][j] += matriks_a[i][k] * matriks_b[k][j]

    return matriks_hasil

n = int(input().strip())

print("Matriks A")
matriks_a = [list(map(int, input().strip().split())) for _ in range(n)]

print("Matriks B")
matriks_b = [list(map(int, input().strip().split())) for _ in range(n)]

matriks_hasil = perkalian_matriks(matriks_a, matriks_b)

print("Matriks A x B")
for baris in matriks_hasil:
    print(" ".join(map(str, baris)))
