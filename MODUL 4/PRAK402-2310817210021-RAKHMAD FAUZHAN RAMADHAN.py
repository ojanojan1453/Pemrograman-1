def urutkan_bilangan(batas):
    # Bilangan ganjil
    for i in range(1, batas + 1, 2):
        print(i, end=" ")
    print()

    # Bilangan genap terbalik
    for i in range(batas if batas % 2 == 0 else batas - 1, 1, -2):
        print(i, end=" ")
    print()

if __name__ == "__main__":
    # Membaca input dari pengguna
    print("Input")
    batas = int(input())

    # Menampilkan output
    print("\nOutput")
    urutkan_bilangan(batas)
