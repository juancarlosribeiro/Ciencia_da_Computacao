n = 48
numDiv = 0

for i in range(1, n + 1):
    if n % i==0:
        numDiv = numDiv + 1

print(numDiv)