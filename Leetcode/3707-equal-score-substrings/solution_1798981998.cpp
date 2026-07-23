class Solution {
public:
    bool scoreBalance(string s) {
        int score = 0;
        for(char ch: s)
            score += (ch - 'a');
        int leftSum = 0;
        for(int i = 0; i < s.length() - 1; i++) {
            leftSum += s[i] - 'a';
            score -= s[i] - 'a';
            if (leftSum == score)
                return true;
        }

        return false;
    }
};