class Solution {
public:
    vector<int> transformArray(vector<int>& nums) {
        int countOdd = 0, countEven = 0;

        for (int i: nums)
            if (i % 2 == 0)
                countEven++;
            else
                countOdd++;
        
        int i = 0;
        while (countEven--)
            nums[i++] = 0;
        
        while (countOdd--)
            nums[i++] = 1;
        
        return nums;
    }
};