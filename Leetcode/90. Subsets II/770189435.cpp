class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        vector<int> ds;
        
        findsubset(0, nums, ds, ans);
        return ans;
    }
    
    void findsubset(int idx, vector<int> &arr, vector<int> &ds, vector<vector<int>> &ans){
        ans.push_back(ds);
        for(int i=idx; i<arr.size(); i++){
            if(i!=idx && arr[i]==arr[i-1]) continue;
            ds.push_back(arr[i]);
            findsubset(i+1, arr, ds, ans);
            ds.pop_back();
        }
    }
};