class Solution {
public:
    int balancedStringSplit(string s) {
        int count = 0;
        int lCount = 0, rCount = 0;

        for (char c: s) {
            c == 'L' ? lCount++ : rCount++;

            if (rCount == lCount) {
                rCount = lCount = 0;
                count++;
            }
        }

        return count;
    }
};