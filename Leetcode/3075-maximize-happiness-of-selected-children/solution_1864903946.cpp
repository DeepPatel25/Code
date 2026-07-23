class Solution {
public:
    long long maximumHappinessSum(vector<int>& h, int k) {
        sort(h.begin(), h.end());

        long long ans = 0;
        for (int i = h.size() - 1, d = 0; i >= 0, k > 0; i--, k--, d++) {
            int val = h[i] - d;
            
            if (val >= 0)
                ans += val;
        } 

        return ans;
    }
};