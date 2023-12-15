def ejaan_bilangan(n):
    if n < 0 or n >= 100:
        return "Anda Menginput Melebihi Limit Bilangan"
    elif n == 0:
        return "Nol"
    elif n < 10:
        return "Satuan"
    elif n < 20:
        return "Belasan"
    else:
        return "Puluhan"

jumlah_input = 5 
for _ in range(jumlah_input):
    bilangan = int(input())
    print(ejaan_bilangan(bilangan))
