def dekode_pesan(kode, pesan_diterima):
    pesan_terdekripsi = ""
    hitung_bintang = 0
    hitung_pagar = 0

    for i in range(min(len(kode), len(pesan_diterima))):
        if kode[i] == pesan_diterima[i]:
            pesan_terdekripsi += "*"
            hitung_bintang += 1
        else:
            pesan_terdekripsi += "#"
            hitung_pagar += 1

    return pesan_terdekripsi, hitung_bintang, hitung_pagar

kode = input().strip()
pesan_diterima = input().strip()

pesan_terdekripsi, hitung_bintang, hitung_pagar = dekode_pesan(kode, pesan_diterima)

if len(kode) != len(pesan_diterima):
    print("Panjang kalimat berbeda, pesan palsu")
else:
    print(pesan_terdekripsi)
    print(f"* = {hitung_bintang}")
    print(f"# = {hitung_pagar}")

    if hitung_bintang >= hitung_pagar:
        print("Pesan Asli")
    else:
        print("Pesan Palsu")

