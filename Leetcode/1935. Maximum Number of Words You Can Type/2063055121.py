class Solution:
    def canBeTypedWords(self, text: str, brokenLetters: str) -> int:
        arr = text.split()
        count = 0

        for val in arr:
            isValid = True
            for i in val:
                if i in brokenLetters:
                    isValid = False
                    break
            
            if isValid:
                count += 1
            
        return count