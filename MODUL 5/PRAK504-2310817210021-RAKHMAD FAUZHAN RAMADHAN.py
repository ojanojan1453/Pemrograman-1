def reverse(number):
    reversed_str = str(number)[::-1].lstrip('0')
    reversed_number = int(reversed_str)
    return reversed_number

A, B = map(int, input().split())

A_reverse = reverse(A)
B_reverse = reverse(B)

C = A_reverse + B_reverse

result = reverse(C)
print(result)
