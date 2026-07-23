class Solution {
public:
    int countAsterisks(string s) {
        bool canCount = true;
        int count = 0;
        for (int i = 0; i < s.size(); ++i) {
            if (s[i] == '*' && canCount)
                count++;
            else if (s[i] == '|')
                canCount = !canCount;
        }

        return count;
    }
};