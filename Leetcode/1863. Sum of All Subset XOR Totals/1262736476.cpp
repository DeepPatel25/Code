class Solution {
public:
    void solve(int idx, vector<int>& nums, int xorBit, int &sum) {
        if(idx == nums.size()) {
            sum += xorBit;
            return;
        }

        solve(idx + 1, nums, xorBit ^ nums[idx], sum);
        solve(idx + 1, nums, xorBit, sum);
    }

    int subsetXORSum(vector<int>& nums) {
        int sum = 0;
        solve(0, nums, 0, sum);
        return sum;
    }
};