class Solution {
public:
    vector<bool> pathExistenceQueries(int n, vector<int>& nums, int maxDiff, vector<vector<int>>& queries) {
        vector<bool> ans;

        for (auto& query: queries) {
            int l = query[0], r = query[1];

            if (l == r)
                ans.push_back(true);
            else {
                bool isValid = true;
                int a = min(l, r), b = max(l, r);
                l = a;
                r = b;

                while (l <= r and l + 1 <= r) {
                    if (abs(nums[l] - nums[l + 1]) > maxDiff) {
                        isValid = false;
                        break;
                    }
                    l++;
                }

                ans.push_back(isValid);
            }
        }

        return ans;
    }
};