class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int size = nums.size();

        bool isIncr = true;
        for (int i = 0; i < size - 1; i++) {
            if (nums[i] > nums[i + 1]) {
                isIncr = false;
                break;
            }
        }

        if (isIncr)
            return true;
        
        for (int i = 0; i < size - 1; i++) {
            if (nums[i] < nums[i + 1])
                return false;
        }

        return true;
    }
};