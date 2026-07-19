class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        sort(happiness.begin(), happiness.end());

        long long ans = 0;
        for(int i = happiness.size() - 1, decrement = 0; i >= 0, k > 0; i--,
            k--, decrement++) {
                int val = happiness[i] - decrement;
                if(val >= 0) {
                    ans += val;
                }
            }
        
        return ans;
    }
};