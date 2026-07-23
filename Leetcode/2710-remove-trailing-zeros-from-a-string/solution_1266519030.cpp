class Solution {
public:
    string removeTrailingZeros(string num) {
        int lastIdx;

        for(int i = num.size() - 1; i >= 0; i--) {
            if(num[i] != '0') {
                lastIdx = i;
                break;
            }
        }

        return num.substr(0, lastIdx + 1);
    }
};