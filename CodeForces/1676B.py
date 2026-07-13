n = int(input())

while n:
    size = int(input())
    arr = list(map(int, input().split()))
    
    minEle = min(arr)
    sum = 0
        
    for i in arr:
        sum += i - minEle
        
    print(sum)
    n -= 1
