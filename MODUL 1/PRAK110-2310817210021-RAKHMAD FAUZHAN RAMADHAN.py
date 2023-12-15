import math
alas = 5.0
tinggi = 12.0


sisi_a = tinggi
sisi_b = math.sqrt(alas * alas + tinggi * tinggi)
sisi_c = alas


keliling = sisi_a + sisi_b + sisi_c


luas = 0.5 * alas * tinggi


alas_str = str(alas).rstrip('0').rstrip('.')  
tinggi_str = str(tinggi).rstrip('0').rstrip('.')
sisi_a_str = str(sisi_a).rstrip('0').rstrip('.')
sisi_b_str = str(sisi_b).rstrip('0').rstrip('.')
sisi_c_str = str(sisi_c).rstrip('0').rstrip('.')
keliling_str = str(keliling).rstrip('0').rstrip('.')
luas_str = str(luas).rstrip('0').rstrip('.')

print("Diketahui :")
print(f"Alas = {alas_str} cm")
print(f"Tinggi = {tinggi_str} cm")
print("Jawab :")
print(f"Sisi A = {sisi_a_str} cm")
print(f"Sisi B = {sisi_b_str} cm")
print(f"Sisi C = {sisi_c_str} cm")
print(f"Keliling = {keliling_str} cm")
print(f"Luas = {luas_str} cm")
