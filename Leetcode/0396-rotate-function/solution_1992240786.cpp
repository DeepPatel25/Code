class Solution {
public:
    int maxRotateFunction(vector<int>& nums) {
        int maxi = INT_MIN;
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            int itr = 0, size = n, idx = i;
            int sum = 0;

            while (size--) {
                sum += (itr * nums[idx]);
                idx = (idx + 1) % n;
                itr++;
            }

            maxi = max(maxi, sum);
        }

        return maxi;
    }
};