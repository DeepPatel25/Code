class Solution {
public:
    int minimumPartition(string s, int k) {
        long long res = 1, curr = 0;

        for(int i = 0, n = s.length(); i < n; i++) {
            int val = s[i] - '0';
            curr = curr * 10 + val;
            if (curr > k) {
                curr = val;
                ++res;
            }

            if (curr > k) return -1;
        }

        return res;
    }
};