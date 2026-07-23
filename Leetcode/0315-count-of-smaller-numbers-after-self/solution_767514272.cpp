class Solution {
public:
    vector<int> countSmaller(vector<int>& nums) {
        vector<int> ans;
        
        for(int i=0; i<nums.size(); i++){
            int cnt = count(nums, nums[i], i);
            ans.push_back(cnt);
        }
        
        return ans;
    }
    
    int count(vector<int>& nums, int key, int idx){
        int c = 0;
        for(int j = idx+1; j<nums.size(); j++){
            if(key>nums[j]) c++;
        }
        
        return c;
    }
};