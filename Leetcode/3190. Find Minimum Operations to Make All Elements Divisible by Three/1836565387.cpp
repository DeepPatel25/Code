class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int count = 0, n = nums.size();
        for (int i = 0; i < n; i++)
            if (nums[i] % 3 != 0)
                count++;
        return count;
    }
};