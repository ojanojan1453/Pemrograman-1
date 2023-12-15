n1, n2 = map(int, input().split())

baris1 = list(map(int, input().split()))
baris2 = list(map(int, input().split()))

if n1 == n2:
    hasil = [baris1[i] * baris2[i] for i in range(n1)]

    print(*hasil)
else:
    print("Jumlah tidak sama")
