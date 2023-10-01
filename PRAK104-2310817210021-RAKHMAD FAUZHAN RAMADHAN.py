a = 400000
b = 350000
diskonA = 13
diskonB = 21
hasilA = (a * diskonA) / 100
hasilB = (b * diskonB) / 100
totalA = round (a - hasilA)
totalB = round (b - hasilB)

print(f'Harga sepatu A adalah {a}')
print(f'Harga sepatu B adalah {b}')

print(f'Sepatu A mendapat diskon {diskonA}% sehingga harganya menjadi {totalA}')
print(f'Sepatu B mendapat diskon {diskonB}% sehingga harganya menjadi {totalB}')
