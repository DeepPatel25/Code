class Solution {
public:
    bool checkZeroOnes(string s) {
        int maxZero = 0, maxOne = 0;
        int countZero = 0, countOne = 0;

        for (int i = 0; i < s.length(); i++) {
            if (i - 1 >= 0 and s[i] != s[i - 1]) {
                countOne = 0;
                countZero = 0;
            }

            if (s[i] == '0') {
                countZero++;
                maxZero = max(maxZero, countZero);
            } else if (s[i] == '1') {
                countOne++;
                maxOne = max(maxOne, countOne);
            }
        }


        return maxOne > maxZero;
    }
};