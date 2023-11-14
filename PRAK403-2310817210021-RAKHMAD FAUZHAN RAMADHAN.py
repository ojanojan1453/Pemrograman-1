def generate_crossing_numbers(num1, num2):
    result = []

    if num1 > num2:
        for i in range(num1, num2 - 1, -1):
            result.append((i, num1 + num2 - i))
    elif num2 > num1:
        for i in range(num1, num2 + 1):
            result.append((i, num1 + num2 - i))

    return result

def main():
    input_str = input("Masukkan dua angka dipisahkan oleh spasi: ")
    numbers = [int(x) for x in input_str.split()]

    crossing_numbers = generate_crossing_numbers(numbers[0], numbers[1])

    output_str = " - ".join(["{} {}".format(x[0], x[1]) for x in crossing_numbers])
    print(output_str)

if __name__ == "__main__":
    main()
