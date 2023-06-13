class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> ans;

        int i = 0;
        int j = 0;
        string temp = "";

        while(i < nums.size()) {
            j = i;

            while(j + 1 < nums.size() && nums[j + 1] == nums[j] + 1) {
                j++;
            }

            if(i == j) {
                temp += to_string(nums[i]);
            } else {
                temp += to_string(nums[i]) + "->" + to_string(nums[j]);
            }

            ans.push_back(temp);
            temp = "";
            i = j;
            i++;
        }

        return ans;
    }
};