def main():
    choice = input("Pilih metode input (mendatar/menurun): ").lower()

    if choice == "mendatar":
        a, b, i, j, x, y = map(float, input("Masukkan nilai a, b, i, j, x, y (dipisahkan dengan spasi): ").split())
    elif choice == "menurun":
        a = float(input("Masukkan nilai a: "))
        b = float(input("Masukkan nilai b: "))
        i = float(input("Masukkan nilai i: "))
        j = float(input("Masukkan nilai j: "))
        x = float(input("Masukkan nilai x: "))
        y = float(input("Masukkan nilai y: "))
    else:
        print("Pilihan tidak valid.")
        return

    result = (a - b) * (i / j) - (x + y)
    print(f"{result:.3f}")

if __name__ == "__main__":
    main()
