class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> ds;
        findCombinations(0, candidates, target, ans, ds);
        return ans;
    }
    
    void findCombinations(int idx, vector<int>& arr, int target, vector<vector<int>> &ans, vector<int> &ds){
        if(idx==arr.size()){
            if(target==0){
                ans.push_back(ds);
            }
            return;
        }
        
        if(arr[idx]<=target){
            ds.push_back(arr[idx]);
            findCombinations(idx, arr, target-arr[idx], ans, ds);
            ds.pop_back();
        }
        findCombinations(idx+1, arr, target, ans, ds);
    }
};