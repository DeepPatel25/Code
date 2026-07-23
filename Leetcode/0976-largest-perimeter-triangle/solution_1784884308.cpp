class Solution {
private:
    bool checkTriangle(vector<int>& nums, int i, int j, int k) {
        return ((nums[i] + nums[j] > nums[k]) && (nums[j] + nums[k] > nums[i]) &&  nums[k] + nums[i] > nums[j]);
    }

public:
    int largestPerimeter(vector<int>& nums) {
        // Time Limit Exceeded Solution - O(n3)

        // sort(nums.begin(), nums.end());
        // int maxi = 0;

        // for(int i = 0; i < nums.size() - 2; i++) {
        //     for(int j = i + 1; j < nums.size() - 1; j++) {
        //         for(int k = j + 1; k < nums.size(); k++) {
        //             if(checkTriangle(nums, i, j, k)) {
        //                 maxi = max(maxi, nums[i] + nums[j] + nums[k]);
        //             }
        //         }
        //     }
        // }

        // return maxi;

        sort(nums.begin(), nums.end());
        int size = nums.size();

        for(int i = size - 1; i >= 2; i--) {
            if(checkTriangle(nums, i - 2, i - 1, i)) {
                return nums[i] + nums[i - 1] + nums[i - 2];
            }
        }

        return 0;
    }
};