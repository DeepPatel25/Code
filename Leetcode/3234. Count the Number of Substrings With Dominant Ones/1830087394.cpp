class Solution {
public:
    int numberOfSubstrings(string s) {
        ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
        
        int count = 0;
        for (int i = 0; i < s.size(); i++) {
            int countOne = 0, countZero = 0;
            for (int j = i; j < s.size(); j++) {
                if (s[j] == '0')
                    countZero++;
                else
                    countOne++;

                if (countZero * countZero <= countOne) count++;
            }
        }

        return count;
    }
};