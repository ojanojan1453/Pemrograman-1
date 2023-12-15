def urutkan_angka(a, b):
    if a < b:
        return a, b
    else:
        return b, a

data = [
    (36, 12),
    (5, 6),
    (94, 65)
]

for pasangan in data:
    hasil_urutan = urutkan_angka(pasangan[0], pasangan[1])
    print(hasil_urutan[0], hasil_urutan[1])