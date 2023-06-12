class Solution {
public:
	void rotate(vector<int>& nums, int k) {
        // 2nd Approach

        k = k % nums.size();

        reverse(nums.begin(), nums.begin() + (nums.size() - k));
        reverse(nums.begin() + (nums.size() - k), nums.end());
        reverse(nums.begin(), nums.end());

        // 1st Approach

		// int n = nums.size();
		// if(k >= n) k = k % n;

		// if(k == 0) return;

		// int temp[k];
		// for(int i = n - 1, j = k - 1; i >= n - k; i--, j--) temp[j] = nums[i];
		// for(int i = n - 1; i >= k; i--) nums[i] = nums[i - k];
		// for(int i = 0; i < k; i++) nums[i] = temp[i];
    }
};