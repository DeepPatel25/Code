class Solution {
public:
    vector<vector<int>> ans;
    
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        permute(nums, 0);
        return ans;
    }
    
    void permute(vector<int> nums, int i){
        if(i==nums.size()){
            ans.push_back(nums);
            return;
        }
        for(int j=i; j<nums.size(); j++){
            if(nums[i]==nums[j] && i!=j) continue;
            swap(nums[i], nums[j]);
            permute(nums, i+1);
        }
    }
};