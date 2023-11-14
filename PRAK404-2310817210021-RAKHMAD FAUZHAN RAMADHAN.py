def main():
    while True:
        print("Pilih program")
        print("1. Penjumlahan")
        print("2. Pengurangan")
        print("3. Perkalian")
        print("4. Pembagian")
        print("5. Exit")

        try:
            choice = int(input("Masukkan Pilihan: "))

            if 1 <= choice <= 4:
                num1 = float(input("Masukkan nilai pertama: "))
                num2 = float(input("Masukkan nilai kedua: "))

                if choice == 1:
                    result = num1 + num2
                    print(f"Hasil penjumlahan antara {num1:.2f} dengan {num2:.2f} adalah {result:.2f}")
                elif choice == 2:
                    result = num1 - num2
                    print(f"Hasil pengurangan antara {num1:.2f} dengan {num2:.2f} adalah {result:.2f}")
                elif choice == 3:
                    result = num1 * num2
                    print(f"Hasil perkalian antara {num1:.2f} dengan {num2:.2f} adalah {result:.2f}")
                elif choice == 4:
                    if num2 != 0:
                        result = num1 / num2
                        print(f"Hasil pembagian antara {num1:.2f} dengan {num2:.2f} adalah {result:.2f}")
                    else:
                        print("Error: Pembagian dengan nol tidak diizinkan")
            elif choice == 5:
                print("Terimakasih, telah menggunakan kalkulator NAMAANDA")
                break
            else:
                print("Input anda salah, silahkan coba lagi")
        except ValueError:
            print("Input harus berupa angka, silahkan coba lagi")

if __name__ == "__main__":
    main()
