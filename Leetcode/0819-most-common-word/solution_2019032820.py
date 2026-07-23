import string

class Solution:
    def mostCommonWord(self, paragraph: str, banned: List[str]) -> str:
        result = paragraph.translate(str.maketrans('', '', string.punctuation))
        print(result)
        
        word_count = {}
        for word in result.split():
            word = word.lower()
            word_count[word] = word_count.get(word, 0) + 1
        
        ans = ''
        maxi = 0

        for w in word_count:
            if word_count[w] > maxi and w not in banned:
                ans = w
                maxi = word_count[w]

        return ans