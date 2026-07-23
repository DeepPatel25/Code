class Solution {
public:
    string stringHash(string s, int k) {
        string ans = "";
        int n = s.size();

        int i = 0;
        while (i < n) {
            int j = i, sum = 0;

            while(j - i < k)
                sum += (s[j++] - 'a');
            
            sum %= 26;
            ans += ('a' + sum);
            i += k;
        }

        return ans;
    }
};