class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        sort(happiness.begin(), happiness.end());

        long long ans = 0;
        for(int i = happiness.size() - 1, decrement = 0; i >= 0, k > 0; i--,
            k--, decrement++) {
                ans += (happiness[i] - decrement);
            }
        
        return ans;
    }
};