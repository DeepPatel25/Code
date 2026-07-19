class Solution {
public:
    int titleToNumber(string columnTitle) {
        int index = columnTitle.size() - 1;
        int ans = 0;

        for(auto it: columnTitle) {
            ans += (it - 64) * pow(26, index--);
        }

        return ans;
    }
};