def cek_bilangan(N):
    if N > 0:
        print("positif")
    elif N < 0:
        print("negatif")
    else:
        print("nol")

for _ in range(3):
    N = int(input())
    cek_bilangan(N)
