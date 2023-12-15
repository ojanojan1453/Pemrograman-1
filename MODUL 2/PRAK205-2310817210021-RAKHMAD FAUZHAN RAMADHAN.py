import math

def main():
    input_str = input("Masukkan nilai A (dan B jika format mendatar): ")

    if ' ' in input_str:  
        A, B = map(float, input_str.split())
    else:  
        A = float(input_str)
        B = float(input("B= "))

    C = math.sqrt(B*B - A*A)

    luas = 0.5 * A * C
    keliling = A + B + C

    print("C(sisi alas)?")
    print(f"Alas = {C:.0f} cm")
    print(f"Tinggi = {A:.0f} cm")
    print(f"Keliling = {keliling:.0f} cm")
    print(f"Luas = {luas:.0f} cm^2")

if __name__ == "__main__":
    main()
