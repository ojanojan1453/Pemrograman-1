def buat_matriks(jumlah_baris, jumlah_kolom, elemen):
    matriks = []
    indeks = 0
    for i in range(jumlah_baris):
        baris = []
        for j in range(jumlah_kolom):
            baris.append(int(elemen[indeks]))
            indeks += 1
        matriks.append(baris)
    return matriks

def tampilkan_matriks(matriks):
    for baris in matriks:
        print(' '.join(map(str, baris)))

input_str1 = input()
input_str2 = input()  

jumlah_baris, jumlah_kolom = map(int, input_str1.split())
elemen = input_str2.split()

matriks = buat_matriks(jumlah_baris, jumlah_kolom, elemen)
tampilkan_matriks(matriks)
