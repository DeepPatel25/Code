class Solution {
public:
    int minimumTime(string s) {
        int firstZero = -1, lastZero = -1, count = 0;

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '0') {
                firstZero = i;
                break;
            }
        }

        if (firstZero == -1)
            return s.size();
        
        for (int i = s.size() - 1; i >= firstZero; i--) {
            if (s[i] == '0') {
                lastZero = i;
                break;
            }
        }

        if (firstZero == lastZero)
            return s.size() - 1;
        
        count += firstZero;
        count += s.size() - lastZero - 1;

        for (int i = firstZero; i < lastZero; i++) {
            if (s[i] == '1')
                count += 2;
        }
        
        return count;
    }
};