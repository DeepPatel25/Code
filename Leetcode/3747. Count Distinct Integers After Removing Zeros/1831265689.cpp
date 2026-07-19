class Solution {
public:
    long long countDistinct(long long n) {
        vector<long long> pow(16, 1);
        string s = to_string(n);
        long long ans = 0, i, m = s.length();

        for (i = 1; i <= 15; i++) pow[i] = pow[i - 1] * 9;
        for (i = 1; i < m; i++) ans += pow[i];
        for (i = 0; i < m; i++) {
            if (s[i] == '0') break;
            for (long long j = 1; j < s[i] - '0'; j++)
                ans += pow[m - i - 1];
        }

        return ans + (i >= s.size());
    }
};