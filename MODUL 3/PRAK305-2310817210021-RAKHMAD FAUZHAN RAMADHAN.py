def konversi_detik(total_detik):
    detik = total_detik % 60
    menit = (total_detik // 60) % 60
    jam = (total_detik // 3600) % 24
    hari = total_detik // 86400

    if hari > 0:
        print(f"{hari} hari {jam:02}:{menit:02}:{detik:02}")
    else:
        print(f"{jam:02}:{menit:02}:{detik:02}")

jumlah_input = 5

for _ in range(jumlah_input):
    detik = int(input())
    konversi_detik(detik)
