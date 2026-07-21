t = int(input())

while t:
    n = int(input())
    s = input()
    
    left = s.find('B')
    right = s.rfind('B')
    print(right - left + 1)
        
    t -= 1
