t = int(input())

while t:
    nsx = [int(x) for x in input().split()]
    arr = [int(x) for x in input().split()]
    
    arrSum = sum(arr)
    
    if nsx[1] == arrSum:
        print("YES");
    elif nsx[1] > arrSum:
        nsx[1] -= arrSum
        
        if nsx[1] % nsx[2] == 0:
            print("YES")
        else:
            print("NO")
    else:
        print("NO")
    
    t -= 1
