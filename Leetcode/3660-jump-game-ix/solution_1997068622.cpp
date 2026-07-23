class Solution {
public:
    vector<int> maxValue(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);
        vector<tuple<int, int, int>> stack;

        for (int i = 0; i < n; i++) {
            int curr_val = nums[i], curr_left = i, curr_right = i;

            while (!stack.empty() and get<0>(stack.back()) > nums[i]) {
                auto [top_val, top_left, top_right] = stack.back();
                stack.pop_back();
                curr_val = max(curr_val, top_val);
                curr_left = top_left;
            }

            stack.push_back({curr_val, curr_left, curr_right});
        }

        for (auto& comp: stack) {
            for (int j = get<1>(comp); j <= get<2>(comp); j++) {
                ans[j] = get<0>(comp);
            }
        }

        return ans;
    }
};