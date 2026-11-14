import sys

def maksimal(a, b):
    m = a
    if a > b:
        m = a
    else:
        m = b
    return m

def minimal(a, b):
    m = b
    if a < b:
        m = a
    return m
input_data = sys.stdin.read().split()

if input_data:
    bilangan = int(input_data[0])
    
    batas = 0
    maks = -100000
    minim = 100000
    
    while batas < bilangan:
        nilai = int(input_data[batas + 1])
        maks = maksimal(maks, nilai)
        minim = minimal(minim, nilai)
        batas += 1

    print(f"{maks} {minim}")
