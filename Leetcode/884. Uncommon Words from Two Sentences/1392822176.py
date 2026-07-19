from collections import Counter

class Solution:
    def uncommonFromSentences(self, s1: str, s2: str) -> List[str]:
        words_s1 = s1.split()
        words_s2 = s2.split()

        combined_words = words_s1 + words_s2
        word_count = Counter(combined_words)        

        uncommon_words = [word for word, count in word_count.items() if count == 1]

        return uncommon_words