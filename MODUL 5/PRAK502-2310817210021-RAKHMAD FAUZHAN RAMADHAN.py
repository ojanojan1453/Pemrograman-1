def hitung(nilai1, nilai2):
    return abs(nilai1 - nilai2)

def jarak_pulau_samosir(x1, y1, x2, y2):
    return hitung(x1, x2) + hitung(y1, y2)

a, b, c, d = map(int, input().split())

hasil = jarak_pulau_samosir(a, b, c, d)
print(hasil)
