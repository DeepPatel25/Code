class Solution {
private:
    int modulo = 1e9 + 7;
    int ans;

    void helper(int i, vector<int>& nums, int k, int mini, int maxi) {
        // check if current index value is already last then increment ans and return it
        if (i == nums.size()) {
            ans = (ans + 1) % modulo;
            return;
        }

        // iterate over all possible segments
        for(int j = i; j < nums.size(); j++) {
            mini = min(mini, nums[j]);
            maxi = max(maxi, nums[j]);

            // check current segment is valid or not
            if (maxi - mini <= k) {
                // if valid then iterate over next segment
                helper(j + 1, nums, k, INT_MAX, INT_MIN);
            } else {
                // if not valid then no need to check for another segmnet 
                break;
            }
        }
    }

public:
    int countPartitions(vector<int>& nums, int k) {
        ans = 0; // set ans to 0 for strating the count
        helper(0, nums, k, INT_MAX, INT_MIN); // call helper function for solve problem
        return ans;    
    }
};