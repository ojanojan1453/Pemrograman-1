def maksimal(a, b):
    return a if a > b else b

def minimal(a, b):
    return a if a < b else b

bilangan = int(input())
nilai_list = list(map(int, input().split()))

maks = -float('inf')
minim = float('inf')

for nilai in nilai_list:
    maks = maksimal(maks, nilai)
    minim = minimal(minim, nilai)

print(f"{maks} {minim}")
