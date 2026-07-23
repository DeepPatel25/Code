class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size();

        if(n == 1) {
            return 0;
        } else {
            if(nums[0] > nums[1]) {
                return 0;
            } else if(nums[n - 2] < nums[n - 1]) {
                return n - 1;
            }
        }

        int start = 1, end = n - 2;
        return solve(start, end, nums);
    }

    int solve(int start, int end, vector<int> &nums) {
        if(start > end) {
            return -1;
        }

        int mid = start + (end - start) / 2;
        
        if(nums[mid] > nums[mid - 1] && nums[mid] > nums[mid + 1]) {
            return mid;
        }

        int left = solve(start, mid - 1, nums);
        int right = solve(mid + 1, end, nums);

        return left != -1 ? left : right;
    }
};