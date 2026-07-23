class Solution:
    def reverseWords(self, s: str) -> str:
        words = s.split()
        vowelCount = 0

        for i in range(0, len(words)):
            if i == 0:
                for w in words[i]:
                    if w == 'a' or w == 'e' or w == 'i' or w == 'o' or w == 'u':
                        vowelCount += 1
            else:
                tempCount = 0
                for w in words[i]:
                    if w == 'a' or w == 'e' or w == 'i' or w == 'o' or w == 'u':
                        tempCount += 1

                if vowelCount == tempCount:
                    words[i] = words[i][::-1]

        return " ".join(words)