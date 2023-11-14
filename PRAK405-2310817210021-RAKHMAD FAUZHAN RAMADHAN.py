def main():
    print("Input")
    n, k = map(int, input().split())

    total = 0
    for i in range(1, n + 1):
        barisan = 0
        for j in range(i, 0, -1):
            nilai = j * k
            barisan += nilai
            print(f"({j} * {k}) = {nilai}", end=" + " if j > 1 else "\n")

        total += barisan

    print("\nOutput")
    print(total)

if __name__ == "__main__":
    main()
