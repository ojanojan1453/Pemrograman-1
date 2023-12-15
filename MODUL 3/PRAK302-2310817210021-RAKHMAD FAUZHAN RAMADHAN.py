def konversi_nilai(nilai):
    if nilai >= 80:
        return "A"
    elif 70 <= nilai <= 79:
        return "B"
    elif 60 <= nilai <= 69:
        return "C"
    elif 50 <= nilai <= 59:
        return "D"
    else:
        return "E"

nilai_list = []
for _ in range(5):
    nilai = int(input())
    nilai_list.append(nilai)

for nilai in nilai_list:
    print(konversi_nilai(nilai))
