jumlah_ruangan = int(input())

zetsu_putih = list(map(int, input().split()))

for i in range(jumlah_ruangan):
    jumlah_setelah_membelah = zetsu_putih[i] * (i + 1)
    print(jumlah_setelah_membelah, end=" ")
