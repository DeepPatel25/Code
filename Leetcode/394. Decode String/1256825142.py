class Solution:
    def decodeString(self, s: str) -> str:
        stack = []
        currNum = 0
        currString = ''

        for c in s:
            if c == '[':
                stack.append(currString)
                stack.append(currNum)
                currString = ''
                currNum = 0
            elif c == ']':
                num = stack.pop()
                prevString = stack.pop()
                currString = prevString + num * currString
            elif c.isdigit():
                currNum = currNum * 10 + int(c)
            else:
                currString += c
        
        return currString