class Solution {
public:
    int numSub(string s) {
        int ans = 0;

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '0')
                continue;

            int start = i, end = i;
            while (end < s.size() && s[end] == '1')
                end++;
            
            int temp = end - start;
            ans += (temp) * (temp + 1) / 2;

            i = end;
        }

        return ans;
    }
};