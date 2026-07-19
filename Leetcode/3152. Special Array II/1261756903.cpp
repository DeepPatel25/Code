class Solution {
public:
    vector<bool> isArraySpecial(vector<int>& nums, vector<vector<int>>& queries) {
        int n = nums.size();
        vector<int> parity_conflict(n - 1, 0);
        vector<int> prefix_conflict(n, 0);

        // Step 1: Preprocess the array
        for (int i = 0; i < n - 1; i++) {
            if (nums[i] % 2 == nums[i + 1] % 2) {
                parity_conflict[i] = 1;
            }
        }

        // Step 2: Create the prefix sum array for conflicts
        for (int i = 0; i < n - 1; i++) {
            prefix_conflict[i + 1] = prefix_conflict[i] + parity_conflict[i];
        }

        // Step 3: Answer each query using the prefix sum array
        vector<bool> result;
        for (const auto& query : queries) {
            int from = query[0];
            int to = query[1];
            if (prefix_conflict[to] - prefix_conflict[from] == 0) {
                result.push_back(true);
            } else {
                result.push_back(false);
            }
        }

        return result;
    }
};
