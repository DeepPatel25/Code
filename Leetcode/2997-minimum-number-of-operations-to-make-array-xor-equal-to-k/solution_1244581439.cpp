class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int xorVal = 0;

        for(auto el : nums) {
            xorVal = xorVal ^ el;
        }

        int ans = 0;
        for(int bit = 0; bit <= 20; bit++) {
            int bitValOfNum = (1 << bit) & xorVal;
            int kBitVal = (1 << bit) & k;

            if(bitValOfNum != kBitVal) ans++;
        }

        return ans;
    }
};