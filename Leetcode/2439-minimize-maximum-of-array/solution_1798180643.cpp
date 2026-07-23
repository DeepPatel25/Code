class Solution {
private:
    int isValid(int x, vector<int>& nums) {
        long sum = 0;
        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];
            if (sum > (long)x * (i + 1)) return false;
        }

        return true;
    }

public:
    int minimizeArrayValue(vector<int>& nums) {
        ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
        int left = 0, right = *max_element(nums.begin(), nums.end());

        while(left < right) {
            int mid = (left + right) / 2;
            if (isValid(mid, nums))
                right = mid;
            else
                left = mid + 1;
        }

        return left;
    }
};