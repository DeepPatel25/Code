class Solution {
public:
    bool scoreBalance(string s) {
        int score = 0;
        for(char ch: s)
            score += (ch - 'a' + 1);
        int leftSum = 0;
        for(int i = 0; i < s.length() - 1; i++) {
            leftSum += s[i] - 'a' + 1;
            score -= s[i] - 'a' + 1;
            if (leftSum == score)
                return true;
        }

        return false;
    }
};