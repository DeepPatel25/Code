n = int(input())
groups = list(map(int, input().split()))

count = [0] * 5

for g in groups:
    count[g] += 1

taxis = count[4] + count[3]
count[1] = max(0, count[1] - count[3])
taxis += count[2] // 2

if count[2] % 2:
    taxis += 1
    count[1] = max(0, count[1] - 2)

taxis += (count[1] + 3) // 4
print(taxis)
