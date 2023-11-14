def main():
    input_str = input().split()
    kelipatan = int(input_str[0])
    simbol = input_str[1]

    for i in range(1, 51):
        if i % kelipatan == 0:
            print(simbol, end=" ")
        else:
            print(i, end=" ")
    
if __name__ == "__main__":
    main()
