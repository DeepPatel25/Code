class Solution {
public:
    vector<bool> isArraySpecial(vector<int>& nums, vector<vector<int>>& queries) {
        if(nums.size() == 1) {
            vector<bool> ans(queries.size(), true);
            return ans;
        }
        
        map<pair<int, int>, bool> mp;
        vector<bool> ans2;
        
        for(int i = 0; i < queries.size(); i++) {
            int from = queries[i][0];
            int to = queries[i][1];
            
            bool flag = true;
            
            for(int j = from; j < to; j++) {
                if(nums[j] % 2 == nums[j + 1] % 2) {
                    flag = false;
                    break;
                }
            }
            
            ans2.push_back(flag);
        }
        
        return ans2;
    }
};