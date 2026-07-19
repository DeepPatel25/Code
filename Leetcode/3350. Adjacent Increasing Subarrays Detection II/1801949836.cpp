class Solution {
private:
    bool isValid(vector<int> &nums, vector<int> &temp, int mid) {
        int n = nums.size();

        if (n < 2 * mid) return false;
        if (mid == 1) return true;

        for (int i = 0; i <= n - 2 * mid; i++)
            if (temp[i] >= mid && temp[i + mid] >= mid) 
                return true;

        return false;
    }

public:
    int maxIncreasingSubarrays(vector<int>& nums) {
        ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
        int n = nums.size();
        vector<int> temp(n, 0);

        temp[n - 1] = 1;
        for (int i = n - 2; i >= 0; i-- ) {
            if (nums[i] >= nums[i + 1]) {
                temp[i] = 1;
            } else {
                temp[i] = temp[i + 1] + 1;
            }
        }

        int start = 1, end = n / 2, ans = 0;
        while(start <= end) {
            int mid = (start + end) / 2;

            if (isValid(nums, temp, mid)) {
                ans = mid;
                start = mid + 1;
            } else {
                end = mid - 1;
            }
        }

        return ans;
    }
};