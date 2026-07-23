class Solution:
    def sortSentence(self, s: str) -> str:
        words = [''] * 9
        sParsed = s.split()

        for word in sParsed:
            j = ord(word[-1]) - 49
            words[j] = word[:-1]
        
        return " ".join(words).rstrip()