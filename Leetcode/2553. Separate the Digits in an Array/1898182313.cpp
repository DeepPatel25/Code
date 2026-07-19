class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> ans;

        for (int x : nums) {
            if (x == 0) {
                ans.push_back(0);
                continue;
            }

            string s = to_string(x);
            for (char c : s) {
                ans.push_back(c - '0');
            }
        }

        return ans;
    }
};
