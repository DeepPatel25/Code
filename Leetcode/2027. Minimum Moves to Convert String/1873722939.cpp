class Solution {
public:
    int minimumMoves(string s) {
        int count = 0;
        int n = s.size();

        for (int i = 0; i < n; i += 3) {
            int tempCount = 0;
            if (s[i] == 'X')
                tempCount++;
            
            if (i + 1 < n && s[i + 1] == 'X')
                tempCount++;

            if (i + 2 < n && s[i + 2] == 'X')
                tempCount++;
            
            if (tempCount > 0)
                count++;
        }

        return count;
    }
};