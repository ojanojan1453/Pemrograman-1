import math

def main():
    print("Pilih metode input:")
    print("1. Mendatar (jari-jari dan tinggi dipisahkan dengan spasi)")
    print("2. Menurun (setiap variabel pada baris baru)")
    choice = int(input("Masukkan pilihan Anda (1/2): "))

    if choice == 1:
        r, h = map(float, input("jari-jari dan tinggi (format mendatar): ").split())
        volume = math.pi * r * r * h
        luas = 2 * math.pi * r * r + 2 * math.pi * r * h
        keliling = 2 * math.pi * r
        
        print(f"Volume = {volume:.2f}") 
        print(f"Luas = {luas:.2f}")      
        print(f"Keliling = {keliling:.2f}")  

    elif choice == 2:
        r = float(input("jari-jari: "))
        h = float(input("tinggi: "))

        volume = math.ceil(math.pi * r * r * h)  
        luas = math.ceil(2 * math.pi * r * r + 2 * math.pi * r * h)  
        keliling = math.ceil(2 * math.pi * r)  
        
        print(f"Volume = {volume:.2f}")  
        print(f"Luas = {luas:.2f}")     
        print(f"Keliling = {keliling:.2f}")  
    else:
        print("Pilihan tidak valid.")
        return

if __name__ == "__main__":
    main()
