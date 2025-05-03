arr = []
try:
    while True:
        val = int(input())
        arr.append(val)
except:
    pass
print(*arr)