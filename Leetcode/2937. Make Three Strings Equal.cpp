class Solution {
public:
    int findMinimumOperations(string s1, string s2, string s3) {
        int cmn = -1;

        for (int i = 0; i < min({s1.size(), s2.size(), s3.size()}); i++) {
            if (s1[i] == s2[i] and s2[i] == s3[i])
                cmn = i;
            else
                break;
        }

        if (cmn == -1)
            return -1;
        
        int removeEleCount = s1.size() + s2.size() + s3.size() - 3 * ++cmn;
        return removeEleCount;
    }
};
