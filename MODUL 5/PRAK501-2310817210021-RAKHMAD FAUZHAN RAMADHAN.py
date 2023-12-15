def max_bilangan(a, b, c, d):
    max_value = a

    if b > max_value:
        max_value = b
    if c > max_value:
        max_value = c
    if d > max_value:
        max_value = d

    return max_value
input_1 = list(map(int, input().split()))
hasil_1 = max_bilangan(*input_1)
print(hasil_1)

input_2 = list(map(int, input().split()))
hasil_2 = max_bilangan(*input_2)
print(hasil_2)

input_3 = list(map(int, input().split()))
hasil_3 = max_bilangan(*input_3)
print(hasil_3)
