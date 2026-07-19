class Solution {
public:
    int minimumMoves(string s) {
        int i = 0, n = s.size();
        int count = 0;

        while (i < s.size()) {
            if (s[i] == 'X') {                
                count++;
                i += 3;
            } else {
                i++;
            }
        }

        return count;
    }
};