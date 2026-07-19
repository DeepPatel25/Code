class Solution(object):
    def replaceWords(self, dictionary, sentence):
        """
        :type dictionary: List[str]
        :type sentence: str
        :rtype: str
        """
        
        ans = sentence.split(" ")
        
        for i in range(0, len(ans)):
            for j in range(0, len(dictionary)):
                if dictionary[j] in ans[i]:
                    ans[i] = dictionary[j]
                    break
            
        a = " ".join(ans)
        return a